# ESP8266 Arduino PlatformIO

Quick Start with ESP8266 (NodeMCU) in the Arduino Ecosystem using PlatformIO IDE:
[Medium](https://loginov-rocks.medium.com/b8415bf9a038)

This repository represents a minimalistic [PlatformIO](https://platformio.org) template project to quickly start with
[ESP8266](https://en.wikipedia.org/wiki/ESP8266)-based development boards such as
[NodeMCU](https://en.wikipedia.org/wiki/NodeMCU) in the [Arduino](https://www.arduino.cc) ecosystem using PlatformIO
IDE. It provides two options to connect the development board to a Wi-Fi network and starts blinking LED after a
successful connection.

The first option configured by default is to use the `managerConnect()` function that utilizes the
[WiFiManager](https://registry.platformio.org/libraries/tzapu/WiFiManager) library by **tzapu** which allows you to
configure Wi-Fi access by establishing an access point, that you can connect to and enter Wi-Fi credentials, in a
simple and user-friendly way.

The second option is to use the `simpleConnect()` function that will connect to the Wi-Fi using the SSID and password
defined in the code, without relying on any libraries. Pick what you like and follow the comments in the
[platformio.ini](https://github.com/loginov-rocks/ESP8266-Arduino-PlatformIO/blob/main/platformio.ini) and
[main.cpp](https://github.com/loginov-rocks/ESP8266-Arduino-PlatformIO/blob/main/src/main.cpp) files to configure the
preferred option.

PlatformIO will use the `nodemcuv2` environment to build the project by default, however, you can switch between
preconfigured environments or set a new one matching your
[development board](https://docs.platformio.org/en/latest/platforms/espressif8266.html#boards).

## Tested Boards

| Development Board            | Environment    | SoC      | Module               | Price | Link (no referrals)                                                              |
| ---------------------------- | -------------- | -------- | -------------------- | ----- | -------------------------------------------------------------------------------- |
| NodeMCU (V3 CH340G)          | `nodemcuv2`    | ESP8266  | ESP-12E (assumption) | $1.82 | [Unknown from Aliexpress](https://www.aliexpress.us/item/2255799973818463.html)  |
| ESP8266-DevKitC-02D-F        | `esp_wroom_02` | ESP8266  | ESP-WROOM-02D        | $8.00 | [Official from Amazon](https://a.co/d/dhkB3tJ)                                   |
| WEMOS LOLIN D1 mini (V4.0.0) | `d1_mini`      | ESP8266  | ESP-8266EX           | $4.38 | [Official from Aliexpress](https://www.aliexpress.us/item/2251832342786284.html) |
| WEMOS LOLIN S3 (V1.0.0)      | `lolin_s3`     | ESP32-S3 | ESP32-S3-WROOM-1     | $7.65 | [Official from Aliexpress](https://www.aliexpress.us/item/3256804457160611.html) |

Note: **ESP8266-DevKitC-02D-F** does not have a built-in LED (referenced in the code as `LED_BUILTIN`).

## Reference

* PlatformIO Documentation:
  * [Espressif 8266 Platform](https://docs.platformio.org/en/latest/platforms/espressif8266.html)
    * [NodeMCU 1.0 (ESP-12E Module)](https://docs.platformio.org/en/latest/boards/espressif8266/nodemcuv2.html)
    * [Espressif ESP-WROOM-02 Board](https://docs.platformio.org/en/latest/boards/espressif8266/esp_wroom_02.html)
    * [WeMos D1 R2 and mini Board](https://docs.platformio.org/en/latest/boards/espressif8266/d1_mini.html)
  * [Espressif 32 Platform](https://docs.platformio.org/en/latest/platforms/espressif32.html)
    * [WEMOS LOLIN S3](https://docs.platformio.org/en/latest/boards/espressif32/lolin_s3.html)
* Espressif Official Product Pages:
  * [ESP8266 SoC](https://www.espressif.com/en/products/socs/esp8266)
  * [ESP32-S3 SoC](https://www.espressif.com/en/products/socs/esp32-s3)
* Wemos Official Product Pages:
  * [WEMOS LOLIN D1 mini](https://www.wemos.cc/en/latest/d1/d1_mini.html)
  * [WEMOS LOLIN S3](https://www.wemos.cc/en/latest/s3/s3.html)
* Wikipedia:
  * [ESP8266](https://en.wikipedia.org/wiki/ESP8266)
  * [ESP32](https://en.wikipedia.org/wiki/ESP32)
  * [NodeMCU](https://en.wikipedia.org/wiki/NodeMCU)
* [NodeMCU Official Website](https://www.nodemcu.com)
