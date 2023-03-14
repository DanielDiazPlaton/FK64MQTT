/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "states.h"


/*******************************************************************************
 * Definitions
 ******************************************************************************/


/* Define the init structure for the output LED pin */
    gpio_pin_config_t led_config = {
        kGPIO_DigitalOutput,
        0,
    };

void init_states(void){
    /* Init output LED GPIO. */
    GPIO_PinInit(BOARD_LED_GPIO, BOARD_LED_GPIO_PIN, &led_config);
    GPIO_PinInit(BOARD_LED_2_GPIO, BOARD_LED_2_GPIO_PIN, &led_config);
    GPIO_PinInit(BOARD_LED_3_GPIO, BOARD_LED_3_GPIO_PIN, &led_config);

    GPIO_PinWrite(BOARD_LED_GPIO, BOARD_LED_GPIO_PIN, OFF);
    GPIO_PinWrite(BOARD_LED_2_GPIO, BOARD_LED_2_GPIO_PIN, OFF);
    GPIO_PinWrite(BOARD_LED_3_GPIO, BOARD_LED_3_GPIO_PIN, OFF);
}


void red(void){
    // GPIO_PinWrite(BOARD_LED_GPIO, BOARD_LED_GPIO_PIN, ON);
    GPIO_PortToggle(BOARD_LED_GPIO, 1U << BOARD_LED_GPIO_PIN);
    GPIO_PinWrite(BOARD_LED_2_GPIO, BOARD_LED_2_GPIO_PIN, OFF);
    GPIO_PinWrite(BOARD_LED_3_GPIO, BOARD_LED_3_GPIO_PIN, OFF);
}

void green(void){
    GPIO_PinWrite(BOARD_LED_GPIO, BOARD_LED_GPIO_PIN, OFF);
    GPIO_PortToggle(BOARD_LED_2_GPIO, 1U << BOARD_LED_2_GPIO_PIN);
    // GPIO_PinWrite(BOARD_LED_2_GPIO, BOARD_LED_2_GPIO_PIN, ON);
    GPIO_PinWrite(BOARD_LED_3_GPIO, BOARD_LED_3_GPIO_PIN, OFF);
}

void blue(void){
    GPIO_PinWrite(BOARD_LED_GPIO, BOARD_LED_GPIO_PIN, OFF);
    GPIO_PinWrite(BOARD_LED_2_GPIO, BOARD_LED_2_GPIO_PIN, OFF);
    GPIO_PortToggle(BOARD_LED_3_GPIO, 1U << BOARD_LED_3_GPIO_PIN);
    // GPIO_PinWrite(BOARD_LED_3_GPIO, BOARD_LED_3_GPIO_PIN, ON);
}

void yellow(void){
    GPIO_PinWrite(BOARD_LED_GPIO, BOARD_LED_GPIO_PIN, ON);
    GPIO_PinWrite(BOARD_LED_2_GPIO, BOARD_LED_2_GPIO_PIN, ON);
    GPIO_PinWrite(BOARD_LED_3_GPIO, BOARD_LED_3_GPIO_PIN, OFF);
}

void white(void){
    GPIO_PinWrite(BOARD_LED_GPIO, BOARD_LED_GPIO_PIN, ON);
    GPIO_PinWrite(BOARD_LED_2_GPIO, BOARD_LED_2_GPIO_PIN, ON);
    GPIO_PinWrite(BOARD_LED_3_GPIO, BOARD_LED_3_GPIO_PIN, ON);
}

void off(void){
    GPIO_PinWrite(BOARD_LED_GPIO, BOARD_LED_GPIO_PIN, OFF);
    GPIO_PinWrite(BOARD_LED_2_GPIO, BOARD_LED_2_GPIO_PIN, OFF);
    GPIO_PinWrite(BOARD_LED_3_GPIO, BOARD_LED_3_GPIO_PIN, OFF);
}