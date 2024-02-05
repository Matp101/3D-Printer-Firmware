/**
 * Mathews Pinout
 */
#pragma once

/**
 * MKS BASE v1.4 with A4982 stepper drivers and digital micro-stepping
 */

#if HOTENDS > 2 || E_STEPPERS > 2
  #error "MKS BASE 1.4 only supports up to 2 hotends / E-steppers. Comment out this line to continue."
#endif

#define BOARD_INFO_NAME "MKS BASE 1.4"
#define MKS_BASE_VERSION                      14

//
// Heaters / Fans
//
#define FAN_PIN                                9  // PH6 ** Pin18 ** PWM9

// Other Mods

//#define SERVO3_PIN                            12  // PB6 ** Pin25 ** D12
#define PS_ON_PIN                              2  // X+ // PE4 ** Pin6  ** PWM2       **MUST BE HARDWARE PWM
#define FILWIDTH_PIN                          15  // Y+ // PJ0 ** Pin63 ** USART3_RX  **Pin should have a pullup!
#define FIL_RUNOUT_PIN                        19  // Z+ // PD2 ** Pin45 ** USART1_RX

#ifndef RGB_LED_R_PIN
  #define RGB_LED_R_PIN                       50
#endif
#ifndef RGB_LED_R_PIN
  #define RGB_LED_G_PIN                       51
#endif
#ifndef RGB_LED_R_PIN
  #define RGB_LED_B_PIN                       52
#endif

//#ifndef CASE_LIGHT_PIN
//  #define CASE_LIGHT_PIN                      11  // PB5 ** Pin24 ** PWM11
//#endif




/****************************************************/
//#include "pins_MKS_BASE_common.h"
#if MKS_BASE_VERSION >= 14
  //
  // Heaters / Fans
  //
  // Power outputs EFBF or EFBE
  #define MOSFET_D_PIN                         11

  #ifndef CASE_LIGHT_PIN
    #define CASE_LIGHT_PIN                     99
  #endif

  #if MKS_BASE_VERSION >= 14                        //     |===== 1.4 =====|===== 1.5+ =====|
  #define X_MS1_PIN                            5  // PE3 | Pin  5 | PWM5 |        | D3    | SERVO2_PIN
  #define X_MS2_PIN                            6  // PH3 | Pin 15 | PWM6 | Pin 14 | D6    | SERVO1_PIN
  #define Y_MS1_PIN                           59  // PF5 | Pin 92 | A5   |        |       |
  #define Y_MS2_PIN                           58  // PF4 | Pin 93 | A4   |        |       |
  #define Z_MS1_PIN                           22  // PA0 | Pin 78 | D22  |        |       |
  #define Z_MS2_PIN                           39  // PG2 | Pin 70 | D39  |        |       |
  #if MKS_BASE_VERSION == 14
    #define E0_MS1_PIN                        64  // PK2 | Pin 87 | A10  |        |       |
    #define E0_MS2_PIN                        63  // PK1 | Pin 88 | A9   |        |       |
  #else
    #define E0_MS1_PIN                        63  // PK1 |        |      | Pin 86 | A9    |
    #define E0_MS2_PIN                        64  // PK2 |        |      | Pin 87 | A10   |
  #endif
  #define E1_MS1_PIN                          57  // PF3 | Pin 94 | A3   | Pin 93 | A3    |
  #define E1_MS2_PIN                           4  // PG5 | Pin  1 | PWM4 |        | D4    | SERVO3_PIN
#endif
/****************************************************/

/****************************************************/
//
// Servos
//
#ifndef SERVO0_PIN
  #ifdef IS_RAMPS_13
    #define SERVO0_PIN                         7
  #else
    #define SERVO0_PIN                        99//11
  #endif
#endif
#ifndef SERVO1_PIN
  #define SERVO1_PIN                           99
#endif
#ifndef SERVO2_PIN
  #define SERVO2_PIN                           99
#endif
#ifndef SERVO3_PIN
  #define SERVO3_PIN                           99
#endif

//
// Limit Switches
//
#ifndef X_STOP_PIN
  #ifndef X_MIN_PIN
    #define X_MIN_PIN                          3
  #endif
  #ifndef X_MAX_PIN
    #define X_MAX_PIN                          2
  #endif
#endif
#ifndef Y_STOP_PIN
  #ifndef Y_MIN_PIN
    #define Y_MIN_PIN                         14
  #endif
  #ifndef Y_MAX_PIN
    #define Y_MAX_PIN                         15
  #endif
#endif
#ifndef Z_STOP_PIN
  #ifndef Z_MIN_PIN
    #define Z_MIN_PIN                         18
  #endif
  #ifndef Z_MAX_PIN
    #define Z_MAX_PIN                         19
  #endif
#endif

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN                     32
#endif

//
// Steppers
//
#define X_STEP_PIN                            54
#define X_DIR_PIN                             55
#define X_ENABLE_PIN                          38
#ifndef X_CS_PIN
  #define X_CS_PIN                            53
#endif

#define Y_STEP_PIN                            60
#define Y_DIR_PIN                             61
#define Y_ENABLE_PIN                          56
#ifndef Y_CS_PIN
  #define Y_CS_PIN                            49
#endif

#ifndef Z_STEP_PIN
  #define Z_STEP_PIN                          46
#endif
#define Z_DIR_PIN                             48
#define Z_ENABLE_PIN                          62
#ifndef Z_CS_PIN
  #define Z_CS_PIN                            40
#endif

#define E0_STEP_PIN                           26
#define E0_DIR_PIN                            28
#define E0_ENABLE_PIN                         24
#ifndef E0_CS_PIN
  #define E0_CS_PIN                           42
#endif

#define E1_STEP_PIN                           36
#define E1_DIR_PIN                            34
#define E1_ENABLE_PIN                         30
#ifndef E1_CS_PIN
  #define E1_CS_PIN                           44
#endif

//
// Temperature Sensors
//
#ifndef TEMP_0_PIN
  #define TEMP_0_PIN                          13  // Analog Input
#endif
#ifndef TEMP_1_PIN
  #define TEMP_1_PIN                          15  // Analog Input
#endif
#ifndef TEMP_BED_PIN
  #define TEMP_BED_PIN                        14  // Analog Input
#endif

//
// SPI for Max6675 or Max31855 Thermocouple
//
#ifndef MAX6675_SS_PIN
  #define MAX6675_SS_PIN                      66  // Don't use 53 if using Display/SD card (SDSS) or 49 (SD_DETECT_PIN)
#endif

//
// Heaters / Fans
//
#ifndef MOSFET_D_PIN
  #define MOSFET_D_PIN                        -1
#endif
#ifndef RAMPS_D8_PIN
  #define RAMPS_D8_PIN                         8
#endif
#ifndef RAMPS_D9_PIN
  #define RAMPS_D9_PIN                         9
#endif
#ifndef RAMPS_D10_PIN
  #define RAMPS_D10_PIN                       10
#endif

#define HEATER_0_PIN               RAMPS_D10_PIN

#endif
//
// Misc. Functions
//
#define SDSS                                  53
#define LED_PIN                               64


#if ENABLED(CASE_LIGHT_ENABLE) && !defined(CASE_LIGHT_PIN) && !defined(SPINDLE_LASER_ENA_PIN)
  #if NUM_SERVOS <= 1                             // Prefer the servo connector
    #define CASE_LIGHT_PIN                     6  // Hardware PWM
  #elif HAS_FREE_AUX2_PINS
    #define CASE_LIGHT_PIN                    44  // Hardware PWM
  #endif
#endif

//
// Průša i3 MK2 Multiplexer Support
//
#ifndef E_MUX0_PIN
  #define E_MUX0_PIN                          40  // Z_CS_PIN
#endif
#ifndef E_MUX1_PIN
  #define E_MUX1_PIN                          42  // E0_CS_PIN
#endif
#ifndef E_MUX2_PIN
  #define E_MUX2_PIN                          44  // E1_CS_PIN
#endif
/****************************************************/




/*
  Available connectors on MKS BASE v1.4

   =======
   | GND |
   |-----|   E0
   |  10 |                (10)  PB4 ** Pin23 ** PWM10
   |-----|
   | GND |
   |-----|   E1
   |  7  |                ( 7)  PH4 ** Pin16 ** PWM7
   |-----|
   | GND |
   |-----|   FAN
   |  9  |                ( 9)  PH6 ** Pin18 ** PWM9
   =======

   =======
   | GND |
   |-----|   Heated Bed
   |  8  |                ( 8)  PH5 ** Pin17 ** PWM8
   =======

   ==========
   | 12-24V |
   |--------|   Power
   |  GND   |
   ==========

  XS3 Connector
   =================
   | 65 | GND | 5V |      (65)  PK3 ** Pin86 ** A11
   |----|-----|----|
   | 66 | GND | 5V |      (66)  PK4 ** Pin85 ** A12
   =================

  Servos Connector
   =================
   | 11 | GND | 5V |      (11)  PB5 ** Pin24 ** PWM11
   |----|-----|----|
   | 12 | GND | 5V |      (12)  PB6 ** Pin25 ** PWM12
   =================

  ICSP
   =================
   | 5V | 51 | GND |      (51)  PB2 ** Pin21 ** SPI_MOSI
   |----|----|-----|
   | 50 | 52 | RST |      (50)  PB3 ** Pin22 ** SPI_MISO
   =================      (52)  PB1 ** Pin20 ** SPI_SCK

  XS6/AUX-1 Connector
   ======================
   | 5V | GND | NC | 20 | (20)  PD1 ** Pin44 ** I2C_SDA
   |----|-----|----|----|
   | 50 |  51 | 52 | 21 | (50)  PB3 ** Pin22 ** SPI_MISO
   ====================== (51)  PB2 ** Pin21 ** SPI_MOSI
                          (52)  PB1 ** Pin20 ** SPI_SCK
                          (21)  PD0 ** Pin43 ** I2C_SCL

  Temperature
   ==================================
   | GND | 69 | GND | 68 | GND | 67 |
   ==================================
                          (69)  PK7 ** Pin82 ** A15
                          (68)  PK6 ** Pin83 ** A14
                          (67)  PK5 ** Pin84 ** A13

  Limit Switches
   ============
   |  2 | GND | X+        ( 2)  PE4 ** Pin6  ** PWM2
   |----|-----|
   |  3 | GND | X-        ( 3)  PE5 ** Pin7  ** PWM3
   |----|-----|
   | 15 | GND | Y+        (15)  PJ0 ** Pin63 ** USART3_RX
   |----|-----|
   | 14 | GND | Y-        (14)  PJ1 ** Pin64 ** USART3_TX
   |----|-----|
   | 19 | GND | Z+        (19)  PD2 ** Pin45 ** USART1_RX
   |----|-----|
   | 18 | GND | Z-        (18)  PD3 ** Pin46 ** USART1_TX
   ============

  EXP1
   ============
   |  37 | 35 |           (37)  PC0 ** Pin53 ** D37
   |-----|----|           (35)  PC2 ** Pin55 ** D35
   |  17 | 16 |           (17)  PH0 ** Pin12 ** USART2_RX
   |-----|----|           (16)  PH1 ** Pin13 ** USART2_TX
   |  23 | 25 |           (23)  PA1 ** Pin77 ** D23
   |-----|----|           (25)  PA3 ** Pin75 ** D25
   |  27 | 29 |           (27)  PA5 ** Pin73 ** D27
   |-----|----|           (29)  PA7 ** Pin71 ** D29
   | GND | 5V |
   ============

  EXP2
   ============
   |  50 | 52 |           (50)  PB3 ** Pin22 ** SPI_MISO
   |-----|----|           (52)  PB1 ** Pin20 ** SPI_SCK
   |  31 | 53 |           (31)  PC6 ** Pin59 ** D31
   |-----|----|           (53)  PB0 ** Pin19 ** SPI_SS
   |  33 | 51 |           (33)  PC4 ** Pin57 ** D33
   |-----|----|           (51)  PB2 ** Pin21 ** SPI_MOSI
   |  49 | 41 |           (49)  PL0 ** Pin35 ** D49
   |-----|----|           (41)  PG0 ** Pin51 ** D41
   | GND | NC |
   ============
*/
