#ifndef _VARIANT_STEEF_DIY_
#define _VARIANT_STEEF_DIY_

#define HAS_TOUCHSCREEN 1

#define SLEEP_TIME 120

// Analog pins
// #define BATTERY_PIN -1 // A battery voltage measurement pin, voltage divider connected here to measure battery voltage
// // ratio of voltage divider = 2.0
// #define ADC_MULTIPLIER 2.11 // 2.0 + 10% for correction of display undervoltage.
// #define ADC_CHANNEL ADC1_GPIO4_CHANNEL

// LED PWM
// #define RGB_LED_R 4
// #define	RGB_LED_G 16
// #define RGB_LED_B 17

// Button
// #define BUTTON_PIN 0

// Keyboard
#define I2C_SDA 8
#define I2C_SCL 9
#define CANNED_MESSAGE_MODULE_ENABLE 1

// GPS
#define GPS_RX_PIN 1
#define GPS_TX_PIN 2

// #define HAS_SDCARD 1
// #define SPI_MOSI 13
// #define SPI_SCK 12
// #define SPI_MISO 11
// #define SPI_CS 10
// #define SDCARD_CS 6

// LORA SPI
#define USE_RF95 //Wrapper for SX1278 Lora module

#undef LORA_SCK
#undef LORA_MISO
#undef LORA_MOSI
#undef LORA_CS

#define LORA_SCK 12
#define LORA_MISO 13
#define LORA_MOSI 11
#define LORA_CS 16

#define LORA_RESET 15
#define LORA_DIO0 3 // IRQ
#define LORA_DIO1 18 //RADIOLIB_NC?
#define LORA_DIO2 RADIOLIB_NC  //NC?
#define LORA_DIO3 RADIOLIB_NC

#endif
