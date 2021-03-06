#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif
// 24 x 24 gridicons_not_visible
const unsigned char gridicons_not_visible[] PROGMEM = { /* 0X01,0X01,0XB4,0X00,0X40,0X00, */
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0xFF, 0xFF, 0xC7, 
0xFF, 0xFF, 0xE1, 0xC1, 0xFF, 0xF0, 0xC0, 0x3F, 
0xF8, 0xE0, 0x1F, 0xE0, 0x30, 0x87, 0xC2, 0x38, 
0xC3, 0x8F, 0x0C, 0xF1, 0x8F, 0x0F, 0xF1, 0xC7, 
0x83, 0xC3, 0xE1, 0xC1, 0xC7, 0xF0, 0x30, 0xDF, 
0xFC, 0x00, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFE, 
0x3F, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x8F, 0xFF, 
0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};
