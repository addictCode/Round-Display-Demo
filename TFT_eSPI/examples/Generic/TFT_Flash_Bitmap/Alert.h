// We need this header file to use FLASH as storage with PROGMEM directive:

// Icon width and height
const uint16_t alertWidth = 32;
const uint16_t alertHeight = 32;

const unsigned short  alert[1024] PROGMEM={
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0840,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 0, 32 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1080,0xAC66,0xEDE8,0xFE69,0xC4C6,0x2901,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 1, 64 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xBCC6,0xFE68,0xFE68,0xFE6A,0xFE68,0xEDE8,0x18A1,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 2, 96 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x8344,0xFE48,0xFE8C,0xFFDD,0xFFFF,0xFEF0,0xFE48,0xB466,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 3, 128 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1880,0xEDC7,0xFE48,0xFF99,0xFFBC,0xFF9B,0xFFBD,0xFE6A,0xFE48,0x5A23,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 4, 160 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9BE5,0xFE28,0xFED0,0xFFBC,0xFF7A,0xFF9A,0xFF9B,0xFF35,0xFE28,0xBCA6,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 5, 192 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x3962,0xFE28,0xFE28,0xFF9A,0xFF79,0xFF9A,0xFF9B,0xFF9A,0xFFBD,0xFE6B,0xFE28,0x72E3,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 6, 224 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xB465,0xFE28,0xFEF2,0xFF7A,0xFF79,0xFF7A,0xFF9A,0xFF7A,0xFF7A,0xFF78,0xFE28,0xDD67,0x0860,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 7, 256 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5A22,0xFE07,0xFE29,0xFF9B,0xFF37,0xFF58,0xFF79,0xFF79,0xFF79,0xFF58,0xFF9B,0xFEAE,0xFE07,0x93A4,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 8, 288 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xC4A5,0xFE07,0xFF15,0xFF37,0xFF36,0xAD11,0x2965,0x2965,0xCDF4,0xFF37,0xFF37,0xFF79,0xFE07,0xFE07,0x2901,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 9, 320 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7B03,0xFDE7,0xFE4B,0xFF79,0xFEF4,0xFF15,0xB552,0x2945,0x2945,0xDE55,0xFF16,0xFF15,0xFF58,0xFED1,0xFDE7,0xAC25,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 10, 352 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0840,0xDD26,0xFDE7,0xFF57,0xFED3,0xFED2,0xFEF4,0xBD93,0x2124,0x2124,0xDE75,0xFF14,0xFED3,0xFED3,0xFF7A,0xFE08,0xFDE7,0x49A2,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 11, 384 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9BA4,0xFDC6,0xFE6E,0xFF36,0xFE90,0xFEB1,0xFED3,0xC592,0x2124,0x2124,0xE675,0xFED3,0xFEB2,0xFEB1,0xFEF3,0xFEF3,0xFDC6,0xBC45,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 12, 416 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x3141,0xF5C6,0xF5C7,0xFF58,0xFE90,0xFE6F,0xFE8F,0xFEB1,0xCDB2,0x2104,0x2104,0xF6B4,0xFEB1,0xFE90,0xFE8F,0xFE90,0xFF58,0xFE0A,0xF5C6,0x72A3,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 13, 448 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xABE4,0xF5A6,0xFEB1,0xFED3,0xFE4E,0xFE6E,0xFE6F,0xFE90,0xD5F2,0x18E3,0x18E3,0xFED4,0xFE90,0xFE6F,0xFE6F,0xFE6E,0xFE91,0xFF36,0xF5A6,0xCCA5,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 14, 480 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x5202,0xF5A6,0xF5C7,0xFF58,0xFE4D,0xFE4D,0xFE4D,0xFE4E,0xFE6F,0xDE11,0x18C3,0x18C3,0xFED3,0xFE6F,0xFE6E,0xFE4E,0xFE4D,0xFE4D,0xFF16,0xFE2C,0xF5A6,0x9363,0x0000,0x0000,0x0000,0x0000,0x0000, // row 15, 512 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0xBC44,0xF585,0xFED3,0xFE6F,0xFE2C,0xFE2C,0xFE2D,0xFE4D,0xFE4E,0xE630,0x10A2,0x2104,0xFED1,0xFE4E,0xFE4D,0xFE4D,0xFE2D,0xFE2C,0xFE4D,0xFF37,0xF586,0xF585,0x28E1,0x0000,0x0000,0x0000,0x0000, // row 16, 544 pixels
0x0000,0x0000,0x0000,0x0000,0x7282,0xF565,0xF5EA,0xFF16,0xFE0B,0xFE0B,0xFE0B,0xFE2C,0xFE2C,0xFE4D,0xF670,0x1082,0x2924,0xFEB0,0xFE2D,0xFE2C,0xFE2C,0xFE2C,0xFE0B,0xFE0B,0xFEB2,0xFE6F,0xF565,0xA383,0x0000,0x0000,0x0000,0x0000, // row 17, 576 pixels
0x0000,0x0000,0x0000,0x0840,0xD4C4,0xF565,0xFEF5,0xFE0C,0xFDE9,0xFDEA,0xFE0A,0xFE0B,0xFE0B,0xFE2C,0xFE8F,0x0861,0x2964,0xFE8F,0xFE2C,0xFE0B,0xFE0B,0xFE0B,0xFE0A,0xFDEA,0xFE0B,0xFF37,0xF586,0xF565,0x4181,0x0000,0x0000,0x0000, // row 18, 608 pixels
0x0000,0x0000,0x0000,0x9343,0xF545,0xF60C,0xFED3,0xFDC8,0xFDC8,0xFDC9,0xFDE9,0xFDEA,0xFDEA,0xFE0B,0xFE8E,0x0861,0x3184,0xFE6D,0xFE0B,0xFE0A,0xFDEA,0xFDEA,0xFDE9,0xFDC9,0xFDC9,0xFE4E,0xFEB2,0xF545,0xB3E3,0x0000,0x0000,0x0000, // row 19, 640 pixels
0x0000,0x0000,0x28E0,0xF544,0xF545,0xFF17,0xFDC8,0xFDA7,0xFDA7,0xFDC8,0xFDC8,0xFDC9,0xFDC9,0xFDE9,0xFE6C,0x10A2,0x39C4,0xFE4C,0xFDEA,0xFDE9,0xFDC9,0xFDC9,0xFDC8,0xFDC8,0xFDA7,0xFDA8,0xFF16,0xF588,0xF544,0x6222,0x0000,0x0000, // row 20, 672 pixels
0x0000,0x0000,0xA383,0xF524,0xF64E,0xFE4E,0xFD86,0xFD86,0xFD87,0xFDA7,0xFDA7,0xFDA8,0xFDC8,0xFDC8,0xFE2A,0xA469,0xB4EA,0xFE2A,0xFDC9,0xFDC8,0xFDC8,0xFDA8,0xFDA7,0xFDA7,0xFD87,0xFD86,0xFDEA,0xFED3,0xF524,0xC443,0x0000,0x0000, // row 21, 704 pixels
0x0000,0x51C1,0xF504,0xF546,0xFF16,0xF565,0xFD65,0xFD65,0xFD86,0xFD86,0xFD86,0xFDA7,0xFDA7,0xFDA7,0xFDE8,0xFE6A,0xFE4A,0xFDE8,0xFDA7,0xFDA7,0xFDA7,0xFDA7,0xFD86,0xFD86,0xFD86,0xFD65,0xFD65,0xFEB2,0xF5CA,0xF504,0x8AE2,0x0000, // row 22, 736 pixels
0x0000,0xB3A2,0xED03,0xFE92,0xFDC9,0xF543,0xF544,0xFD44,0xFD65,0xFD65,0xFD65,0xFD86,0xFD86,0xFD86,0xFDA7,0xFDC7,0xFDC7,0xFDA7,0xFD86,0xFD86,0xFD86,0xFD86,0xFD65,0xFD65,0xFD65,0xFD44,0xF544,0xFD86,0xFEF5,0xED03,0xE4C3,0x1880, // row 23, 768 pixels
0x7241,0xECE3,0xF567,0xFED3,0xF523,0xF523,0xF523,0xF543,0xF544,0xF544,0xFD65,0xFD65,0xFD65,0xFD65,0xD4E6,0x39C5,0x39A5,0xD4E6,0xFD86,0xFD65,0xFD65,0xFD65,0xFD65,0xF544,0xF544,0xF543,0xF523,0xF523,0xFE2E,0xF5EC,0xECE3,0x9B42, // row 24, 800 pixels
0xD443,0xECE3,0xFED4,0xF565,0xF502,0xF502,0xF522,0xF523,0xF523,0xF543,0xF544,0xF544,0xF544,0xFD65,0x8B64,0x18C3,0x18C3,0x8344,0xFD85,0xFD44,0xF544,0xF544,0xF544,0xF543,0xF523,0xF523,0xF522,0xF502,0xF523,0xFEF5,0xED04,0xECE3, // row 25, 832 pixels
0xECC3,0xF5AB,0xFE6F,0xF501,0xF4E1,0xF501,0xF502,0xF502,0xF522,0xF522,0xF523,0xF523,0xF523,0xFD84,0xC504,0x20E1,0x18E1,0xC4E4,0xFD84,0xF543,0xF523,0xF523,0xF523,0xF522,0xF522,0xF502,0xF502,0xF501,0xF501,0xFDC9,0xF62F,0xECC3, // row 26, 864 pixels
0xECC2,0xFE92,0xF523,0xF4E0,0xF4E0,0xF4E1,0xF4E1,0xF501,0xF501,0xF502,0xF502,0xF522,0xF522,0xF543,0xFDE3,0xFEA5,0xF6A4,0xFE04,0xF543,0xF522,0xF522,0xF522,0xF502,0xF502,0xF501,0xF501,0xF4E1,0xF4E1,0xF4E0,0xF4E1,0xFED4,0xECC2, // row 27, 896 pixels
0xECA2,0xF5EC,0xF4E0,0xF4C0,0xF4E0,0xF4E0,0xF4E0,0xF4E1,0xF4E1,0xF501,0xF501,0xF501,0xF502,0xF502,0xF542,0xFDA2,0xFDA2,0xF542,0xF502,0xF502,0xF502,0xF501,0xF501,0xF501,0xF4E1,0xF4E1,0xF4E0,0xF4E0,0xF4E0,0xF4C0,0xF5A9,0xECA2, // row 28, 928 pixels
0xECA2,0xECA2,0xECC2,0xF4C1,0xF4C1,0xF4C1,0xF4C1,0xF4C1,0xF4C1,0xF4C1,0xF4C1,0xF4E1,0xF4E2,0xF4E2,0xF4E2,0xF4E2,0xF4E2,0xF4E2,0xF4E2,0xF4E2,0xF4E2,0xF4E1,0xF4C1,0xF4C1,0xF4C1,0xF4C1,0xF4C1,0xF4C1,0xF4C1,0xECC2,0xECC3,0xECA2, // row 29, 960 pixels
0x8AC1,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0xEC82,0x9B01, // row 30, 992 pixels
0x0000,0x1880,0x51A0,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x8AA1,0x61E0,0x28E0,0x0000}; // row 31, 1024 pixels
