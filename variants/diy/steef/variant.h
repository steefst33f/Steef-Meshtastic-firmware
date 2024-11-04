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

// GPS
// #define GPS_RX_PIN 18
// #define GPS_TX_PIN 17

// #define HAS_SDCARD 1
// #define SPI_MOSI 13
// #define SPI_SCK 12
// #define SPI_MISO 11
// #define SPI_CS 10
// #define SDCARD_CS 6

// LORA SPI
#define LORA_SCK -1
#define LORA_MISO -1
#define LORA_MOSI -1
#define LORA_CS -1

// LORA MODULES
#define USE_SX1262

// LORA CONFIG
#define SX126X_CS LORA_CS
#define SX126X_DIO1 -1
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_BUSY -1
#define SX126X_RESET -1
#define SX126X_RXEN -1
#define SX126X_TXEN RADIOLIB_NC // Assuming that DIO2 is connected to TXEN pin

#endif
