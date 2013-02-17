//---------------------------------------------------------------------------
//    A header datafile for glcd bitmap created with bmp2glcd by S.Varjo 
//    The glcd bitmap data contained in this file is in a format
//    suitable for use by the Arduino GLCD lib.
//    It contains embedded width and height format information.
//
//    Ardino bitmap format support added by Bill Perry
//           (bperrybap@opensource.billsworld.billandterrie.com)
//
// 64x32 Arduino Icon.
// This icon keeps the same "flavor" as the original Ardino Icon
// but has been modified to fit on lcd displays that are only 32 pixels high
// and has be limited to only 64 pixes wide.
// 
// Created 2009-12-12 by Bill Perry  (bperrybap@opensource.billsworld.billandterrie.com)
//
//---------------------------------------------------------------------------

#ifndef _ArduinoIcon64x32_H 
#define _ArduinoIcon64x32_H 

#include <inttypes.h>
// #include <avr/pgmspace.h>

static unsigned char ArduinoIcon64x32[] /* PROGMEM */ = {
64,	// bitmap width  (arduino glcdlib format)
32,	// bitmap height (arduino glcdlib format)
0x00, 0x00, 0xc0, 0x20, 0x10, 0x08, 0xc8, 0x88, 0x08, 0x08, 0x10, 0x20, 0xc0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf0, 0xf8, 0xf8, 0xf8, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0x40, 
0x70, 0x0c, 0x30, 0xc0, 0x00, 0xc0, 0x30, 0x0c, 0x30, 0xc0, 0x00, 0xc0, 0x30, 0x08, 0x88, 0x48, 
0x28, 0x28, 0xf8, 0x20, 0x20, 0x40, 0x80, 0x40, 0x20, 0x10, 0x20, 0x98, 0x18, 0xc0, 0xc0, 0x00, 

0x00, 0x07, 0x18, 0x20, 0x40, 0x80, 0x9f, 0x8f, 0x87, 0x82, 0x40, 0x20, 0x18, 0x07, 0x00, 0x00, 
0x00, 0x00, 0x80, 0xf0, 0xfe, 0xff, 0xff, 0x1f, 0x03, 0x1f, 0xff, 0xff, 0xfc, 0xf0, 0x80, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x1c, 0x63, 0x80, 0x46, 
0x4a, 0x52, 0xe3, 0x52, 0x4a, 0x46, 0x80, 0x63, 0x1c, 0x02, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 

0x00, 0xc0, 0x30, 0x08, 0x04, 0xe2, 0x22, 0x22, 0x22, 0xe2, 0x04, 0x08, 0x30, 0xc0, 0x00, 0x00, 
0xe0, 0xfc, 0xff, 0xff, 0x7f, 0x7f, 0x78, 0x78, 0x78, 0x78, 0x78, 0x7f, 0x7f, 0xff, 0xff, 0xfc, 
0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0x02, 0x02, 0xff, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 0x01, 0x06, 0x08, 0x10, 0x23, 0x22, 0x22, 0x22, 0x23, 0x10, 0x08, 0x06, 0x01, 0x18, 0x3f, 
0x3f, 0x3f, 0x0f, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0f, 0x3f, 
0x3f, 0x3f, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
0x0a, 0x0a, 0x2b, 0x0a, 0x0a, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

};
#endif  //define _ArduinoIcon64x32_H 
