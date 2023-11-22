#define USER_SETUP_ID 66

#define GC9A01_DRIVER  // Full configuration option, define additional parameters below for this display

#define TFT_RGB_ORDER TFT_RGB  // Colour order Blue-Green-Red
#define TFT_HEIGHT 240 // GC9A01 240 x 240

#define TFT_SCLK D8
#define TFT_MISO D9
#define TFT_MOSI D10
#define TFT_CS   D1  // Chip select control pin
#define TFT_DC   D3  // Data Command control pin
#define TFT_RST  -1  // Reset pin (could connect to RST pin)

#define DRV_TOUCH_CHSC6X
#include <Wire.h>
#define CHSC6X_I2C_ID 0x2e
#define CHSC6X_MAX_POINTS_NUM 1
#define CHSC6X_READ_POINT_LEN 5
#define TOUCH_SDA D4
#define TOUCH_SCL D5
#define TOUCH_INT D7

#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:-.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
//#define LOAD_FONT8N // Font 8. Alternative to Font 8 above, slightly narrower, so 3 digits fit a 160 pixel TFT
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

#define SMOOTH_FONT

#define SPI_FREQUENCY 27000000
#define SPI_READ_FREQUENCY  20000000
// The XPT2046 requires a lower SPI clock rate of 2.5MHz so we define that here:
#define SPI_TOUCH_FREQUENCY  2500000
// The ESP32 has 2 free SPI ports i.e. VSPI and HSPI, the VSPI is the default.
// If the VSPI port is in use and pins are not accessible (e.g. TTGO T-Beam)
// then uncomment the following line:
// #define USE_HSPI_PORT
