/*
 * Copyright (c) 2017-2018, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SUNXI_PRIVATE_H
#define SUNXI_PRIVATE_H

void sunxi_configure_mmu_el3(int flags);

void sunxi_cpu_on(unsigned int cluster, unsigned int core);
void sunxi_cpu_off(unsigned int cluster, unsigned int core);
void sunxi_disable_secondary_cpus(unsigned int primary_cpu);
void __dead2 sunxi_power_down(void);

int sunxi_pmic_setup(uint16_t socid);
void sunxi_security_setup(void);

uint16_t sunxi_read_soc_id(void);
void sunxi_set_gpio_out(char port, int pin, bool level_high);
int sunxi_init_platform_r_twi(uint16_t socid, bool use_rsb);

#endif /* SUNXI_PRIVATE_H */
