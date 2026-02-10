// This file pretains to using the XIAO SX1262 module with a XIAO ESP32C3
// This interface retains core functionality of the module, you probably loose
//  access to the user button on the SX1262 board
// pinout sources:
// https://files.seeedstudio.com/wiki/XIAO_WiFi/pin_map-2.png

#define RADIO_BOARDS_NAME "SeeedStudio XIAO ESP32C3"

#define RADIO_NSS     (6)
#define RADIO_IRQ     (3)
#define RADIO_RST     (4)
#define RADIO_GPIO    (5)

#if RADIOLIB_SUPPORT_ENABLED
  #define Radio       SX1262
#endif

