/*----------------------------------------------------------------------------
 * U S B  -  K e r n e l
 *----------------------------------------------------------------------------
 * Name:    usbcfg.h
 * Purpose: USB Custom Configuration
 * Version: V1.20
 *----------------------------------------------------------------------------
 * This software is supplied "AS IS" without any warranties, express,
 * implied or statutory, including but not limited to the implied
 * warranties of fitness for purpose, satisfactory quality and
 * noninfringement. Keil extends you a royalty-free right to reproduce
 * and distribute executable files created using this software for use
 * on NXP ARM microcontroller devices only. Nothing else gives
 * you the right to use this software.
 *
 * Copyright (c) 2005-2009 Keil Software.
 * Adaption to LPCxxxx, Copyright (c) 2009 NXP.
 *----------------------------------------------------------------------------*/

#ifndef __USBCFG_H__
#define __USBCFG_H__

#define USB_COMPLIANCE_ENABLED 0
#define USE_MSC_DESC    1

/* Memory layout for IRAM including MSC class RAM, FAT system, and disk image */
/* 0x10000000 ~ 0x10000800 are the stack and variables R/W in the target layout
or linker option. */
#define MSC_PARAM_MEM    0x10000800
#define MSC_RARAM_SIZE   0x00000800
#define MSC_IMAGE_ADDR   0x10001000
#define MSC_IMAGE_SIZE   0x00001000		/* This is the bottom of the RAM */ 

/* MSC Disk Image Definitions */
/* For WIN7 environment, the minimum FAT12 file system is 8K. For LPC11Uxx,
the current IRAM is only 4K, so, the maximum RAM allocated for RAM disk drive is 3K. 
Once the RAM disk drive pops out with MSC_MemorySize capacity, it doesn't mean
that you can access the maximum RAM capacity, but the MSC_PhysicalMemorySize minus
the minimum memory allocated for FAT12 Boot sector(approx. 2.5K), etc.  */

/* Mass Storage Memory Layout */
#define MSC_PhysicalMemorySize  (1024 * 2)    /*  (2kB)*/
/* For compliance test, to fake the disk size will cause failure in compliance test,
so, set MemorySize the same as PhysicalMemorySize, 3K. Otherwise, fake it, make 
MSC_MemorySize at least 8K. Further investigation is needed on this. */
#if USB_COMPLIANCE_ENABLED 
#define MSC_MemorySize  MSC_PhysicalMemorySize
#else
#define MSC_MemorySize  (1024 * 8)            /* = 0x2000 (8kB)*/
#endif

/* MSC Disk Image Definitions */
#define MSC_ImageSize   0x00001000

#define MSC_EP_IN   0x81
#define MSC_EP_OUT  0x01

#define USB_MAX_IF_NUM  1
#define USB_MAX_EP_NUM  2
#define USB_MAX_PACKET0 64
/* Max In/Out Packet Size */
#define USB_FS_MAX_BULK_PACKET  64
/* Full speed device only */
#define USB_HS_MAX_BULK_PACKET  USB_FS_MAX_BULK_PACKET
/* IP3511 is full speed only */
#define FULL_SPEED_ONLY



#endif  /* __USBCFG_H__ */
