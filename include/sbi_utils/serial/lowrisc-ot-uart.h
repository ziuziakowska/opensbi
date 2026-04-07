/*
 * SPDX-License-Identifier: BSD-2-Clause
 *
 * Copyright (c) 2026 lowRISC Contributors
 *
 * Authors:
 *   Alice Ziuziakowska <a.ziuziakowska@lowrisc.org>
 */

#ifndef __SERIAL_LOWRISC_OT_UART_H__
#define __SERIAL_LOWRISC_OT_UART_H__

#include <sbi/sbi_types.h>

int lowrisc_ot_uart_init(void *base, u32 freq, u32 baud);

#endif
