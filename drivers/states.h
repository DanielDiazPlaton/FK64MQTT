/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2021 NXP
 * All rights reserved.
 *
 * Autor: Daniel Diaz Platon
 */

#ifndef _STATES_H_
#define _STATES_H_


#include "fsl_gpio.h"
#include "board.h"

#define ON      0U
#define OFF      1U


//LED_RED
#define BOARD_LED_GPIO          BOARD_LED_RED_GPIO
#define BOARD_LED_GPIO_PIN      BOARD_LED_RED_GPIO_PIN
// LED GREEN
#define BOARD_LED_2_GPIO        BOARD_LED_GREEN_GPIO
#define BOARD_LED_2_GPIO_PIN    BOARD_LED_GREEN_GPIO_PIN
// LED BLUE
#define BOARD_LED_3_GPIO        BOARD_LED_BLUE_GPIO
#define BOARD_LED_3_GPIO_PIN    BOARD_LED_BLUE_GPIO_PIN


void init_states(void);
void red(void);
void green(void);
void blue(void);
void yellow(void);
void white(void);
void off(void);

#endif  // _STATES_H_