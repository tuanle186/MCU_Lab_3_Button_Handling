/*
 * fsm_manual.c
 *
 *  Created on: Oct 30, 2023
 *      Author: lequo
 */
#include "main.h"
#include "global.h"
#include "fsm_manual.h"
#include "timer.h"

void fsm_red_manual() {
	switch(status) {
		case MODE2:
			led_config();
			setTimer1(500); // for blinking red leds
			status = AUTO_RED;
			break;
		case AUTO_RED:
			if (timer1_flag == 1) {
				HAL_GPIO_TogglePin(GPIOB, red_1_Pin | red_2_Pin);
				setTimer1(500);
			}
			break;
		case ADJ_RED:
			if (timer1_flag == 1) {
				HAL_GPIO_TogglePin(GPIOB, red_1_Pin | red_2_Pin);
				setTimer1(500);
			}
			break;
		default:
			break;
	}
}

void fsm_amber_manual() {
	switch(status) {
		case MODE3:
			led_config();
			setTimer1(500); // for blinking amber leds
			status = AUTO_AMBER;
			break;
		case AUTO_AMBER:
			if (timer1_flag == 1) {
				HAL_GPIO_TogglePin(GPIOB, amber_1_Pin | amber_2_Pin);
				setTimer1(500);
			}
			break;
		case ADJ_AMBER:
			if (timer1_flag == 1) {
				HAL_GPIO_TogglePin(GPIOB, amber_1_Pin | amber_2_Pin);
				setTimer1(500);
			}
			break;
		default:
			break;
	}
}

void fsm_green_manual() {
	switch(status) {
		case MODE4:
			led_config();
			setTimer1(500); // for blinking green leds
			status = AUTO_GREEN;
			break;
		case AUTO_GREEN:
			if (timer1_flag == 1) {
				HAL_GPIO_TogglePin(GPIOB, green_1_Pin | green_2_Pin);
				setTimer1(500);
			}
			break;
		case ADJ_GREEN:
			if (timer1_flag == 1) {
				HAL_GPIO_TogglePin(GPIOB, green_1_Pin | green_2_Pin);
				setTimer1(500);
			}
			break;
		default:
			break;
	}
}
