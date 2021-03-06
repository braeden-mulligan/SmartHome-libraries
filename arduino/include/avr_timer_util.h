/*
 * Author: Braeden Mulligan
 *         braeden.mulligan@gmail.com
 *
 * Copyright: GNU GPL Version 3
 *
 */
#include <stdbool.h>
#include <stdint.h>

#ifndef AVR_TIMER_UTIL_H
#define AVR_TIMER_UTIL_H

#define TIMER_INIT_SUCCESS 0
#define TIMER_INIT_ERROR 1

volatile uint8_t timer8_flag;

uint8_t timer8_init(uint16_t period_ms, uint8_t low_res);

void timer8_start(void);

void timer8_stop(void);

void timer8_restart(void);

void timer8_deinit(void);


volatile uint8_t timer16_flag;

uint8_t timer16_init(uint16_t period_s);

void timer16_start(void);

void timer16_stop(void);

void timer16_restart(void);

void timer16_deinit(void);

#endif
