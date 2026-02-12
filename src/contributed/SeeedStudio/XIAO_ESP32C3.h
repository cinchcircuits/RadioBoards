// This file pretains to using the XIAO SX1262 module with a XIAO ESP32C3
// This interface retains core functionality of the module, you probably loose
//  access to the user button on the SX1262 board
// This pin map is specifically for connecting this XIAO SX1262 module:
// https://www.seeedstudio.com/Wio-SX1262-for-XIAO-p-6379.html
// Directly to this XIAO ESP32C3 module:
// https://www.seeedstudio.com/Seeed-XIAO-ESP32C3-p-5431.html

#define RADIO_BOARDS_NAME "SeeedStudio XIAO ESP32C3"

#define RADIO_NSS     (6)
#define RADIO_IRQ     (3)
#define RADIO_RST     (4)
#define RADIO_GPIO    (5)

#if RADIOLIB_SUPPORT_ENABLED
  #define Radio       SX1262
#endif

