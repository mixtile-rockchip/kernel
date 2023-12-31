/* SPDX-License-Identifier: GPL-2.0-only OR BSD-2-Clause */
/*
 * This header provides macros for Rockchip SerDes device bindings.
 *
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#ifndef __DT_BINDINGS_MFD_ROCKCHIP_SERDES_H
#define __DT_BINDINGS_MFD_ROCKCHIP_SERDES_H

#define RK_SERDES_RGB_RX	(1 << 0)
#define RK_SERDES_LVDS_RX0	(1 << 1)
#define RK_SERDES_LVDS_RX1	(1 << 2)
#define RK_SERDES_DSI_RX0	(1 << 3)
#define RK_SERDES_DSI_RX1	(1 << 4)
#define RK_SERDES_DUAL_LVDS_RX	(1 << 5)

#define RK_SERDES_RGB_TX	(1 << 0)
#define RK_SERDES_LVDS_TX0	(1 << 1)
#define RK_SERDES_LVDS_TX1	(1 << 2)
#define RK_SERDES_DSI_TX0	(1 << 3)
#define RK_SERDES_DSI_TX1	(1 << 4)
#define RK_SERDES_DUAL_LVDS_TX	(1 << 5)

/* Serdes camera stream port */
#define RK_SERDES_CSI_RX0	(1 << 16)
#define RK_SERDES_DVP_RX	(1 << 18)

#define RK_SERDES_CSI_TX0	(1 << 16)
#define RK_SERDES_CSI_TX1	(1 << 17)
#define RK_SERDES_DVP_TX	(1 << 18)

/* Serdes chip type */
#define RK_SERDES_CHIP_LOCAL	0
#define RK_SERDES_CHIP_REMOTE0	1
#define RK_SERDES_CHIP_REMOTE1	2

/* Seredes pin control */
#define RK_SERDES_SER_GPIO_BANK0	(0)
#define RK_SERDES_SER_GPIO_BANK1	(1)
#define RK_SERDES_DES_GPIO_BANK0	(5)
#define RK_SERDES_DES_GPIO_BANK1	(6)

/*
 * Elements values convention: ffff f000 0000 00ss dddd dddd eepp xxxx
 * - ffff f : Flag MUX/PUL/PEN/DRV/SMT
 * - ss : Schmitt value
 * - dddd dddd : Drive Level value
 * - ee : Pull Enable value
 * - pp : Pull Mode value
 * - xxxx : IOMUX Function value
 */
#define RK_SERDES_FLAG_MUX	(1 << 31)
#define RK_SERDES_FLAG_PUL	(1 << 30)
#define RK_SERDES_FLAG_PEN	(1 << 29)
#define RK_SERDES_FLAG_DRV	(1 << 28)
#define RK_SERDES_FLAG_SMT	(1 << 27)
#define RK_SERDES_SHIFT_MUX	(0)
#define RK_SERDES_SHIFT_PUL	(4)
#define RK_SERDES_SHIFT_PEN	(6)
#define RK_SERDES_SHIFT_DRV	(8)
#define RK_SERDES_SHIFT_SMT	(16)
#define RK_SERDES_MASK_MUX	(0xFU << RK_SERDES_SHIFT_MUX)
#define RK_SERDES_MASK_PUL	(0x3U << RK_SERDES_SHIFT_PUL)
#define RK_SERDES_MASK_PEN	(0x3U << RK_SERDES_SHIFT_PEN)
#define RK_SERDES_MASK_DRV	(0xFFU << RK_SERDES_SHIFT_DRV)
#define RK_SERDES_MASK_SMT	(0x3U << RK_SERDES_SHIFT_SMT)

#define RK_SERDES_PIN_CONFIG_MUX_FUNC0		(0x0 << RK_SERDES_SHIFT_MUX | RK_SERDES_FLAG_MUX)
#define RK_SERDES_PIN_CONFIG_MUX_FUNC1		(0x1 << RK_SERDES_SHIFT_MUX | RK_SERDES_FLAG_MUX)
#define RK_SERDES_PIN_CONFIG_MUX_FUNC2		(0x2 << RK_SERDES_SHIFT_MUX | RK_SERDES_FLAG_MUX)
#define RK_SERDES_PIN_CONFIG_MUX_FUNC3		(0x3 << RK_SERDES_SHIFT_MUX | RK_SERDES_FLAG_MUX)
#define RK_SERDES_PIN_CONFIG_MUX_FUNC4		(0x4 << RK_SERDES_SHIFT_MUX | RK_SERDES_FLAG_MUX)
#define RK_SERDES_PIN_CONFIG_MUX_FUNC5		(0x5 << RK_SERDES_SHIFT_MUX | RK_SERDES_FLAG_MUX)
#define RK_SERDES_PIN_CONFIG_MUX_FUNC6		(0x6 << RK_SERDES_SHIFT_MUX | RK_SERDES_FLAG_MUX)
#define RK_SERDES_PIN_CONFIG_MUX_FUNC7		(0x7 << RK_SERDES_SHIFT_MUX | RK_SERDES_FLAG_MUX)
#define RK_SERDES_PIN_CONFIG_MUX_DEFAULT	RK_SERDES_PIN_CONFIG_MUX_FUNC0

#define RK_SERDES_PIN_CONFIG_PUL_NORMAL		(0x0 << RK_SERDES_SHIFT_PUL | RK_SERDES_FLAG_PUL)
#define RK_SERDES_PIN_CONFIG_PUL_UP		(0x1 << RK_SERDES_SHIFT_PUL | RK_SERDES_FLAG_PUL)
#define RK_SERDES_PIN_CONFIG_PUL_DOWN		(0x2 << RK_SERDES_SHIFT_PUL | RK_SERDES_FLAG_PUL)
#define RK_SERDES_PIN_CONFIG_PUL_KEEP		(0x3 << RK_SERDES_SHIFT_PUL | RK_SERDES_FLAG_PUL)
#define RK_SERDES_PIN_CONFIG_PUL_DEFAULT	RK_SERDES_PIN_CONFIG_PUL_NORMAL

#define RK_SERDES_PIN_CONFIG_PEN_DISABLE	(0x0 << RK_SERDES_SHIFT_PEN | RK_SERDES_FLAG_PEN)
#define RK_SERDES_PIN_CONFIG_PEN_ENABLE		(0x1 << RK_SERDES_SHIFT_PEN | RK_SERDES_FLAG_PEN)
#define RK_SERDES_PIN_CONFIG_PEN_DEFAULT	RK_SERDES_PIN_CONFIG_PEN_DISABLE

#define RK_SERDES_PIN_CONFIG_DRV_LEVEL0		(0x0 << RK_SERDES_SHIFT_DRV | RK_SERDES_FLAG_DRV)
#define RK_SERDES_PIN_CONFIG_DRV_LEVEL1		(0x1 << RK_SERDES_SHIFT_DRV | RK_SERDES_FLAG_DRV)
#define RK_SERDES_PIN_CONFIG_DRV_LEVEL2		(0x2 << RK_SERDES_SHIFT_DRV | RK_SERDES_FLAG_DRV)
#define RK_SERDES_PIN_CONFIG_DRV_LEVEL3		(0x3 << RK_SERDES_SHIFT_DRV | RK_SERDES_FLAG_DRV)
#define RK_SERDES_PIN_CONFIG_DRV_LEVEL4		(0x4 << RK_SERDES_SHIFT_DRV | RK_SERDES_FLAG_DRV)
#define RK_SERDES_PIN_CONFIG_DRV_LEVEL5		(0x5 << RK_SERDES_SHIFT_DRV | RK_SERDES_FLAG_DRV)
#define RK_SERDES_PIN_CONFIG_DRV_LEVEL6		(0x6 << RK_SERDES_SHIFT_DRV | RK_SERDES_FLAG_DRV)
#define RK_SERDES_PIN_CONFIG_DRV_LEVEL7		(0x7 << RK_SERDES_SHIFT_DRV | RK_SERDES_FLAG_DRV)
#define RK_SERDES_PIN_CONFIG_DRV_LEVEL_DEFAULT	RK_SERDES_PIN_CONFIG_DRV_LEVEL2

#define RK_SERDES_PIN_CONFIG_SMT_DISABLE	(0x0 << RK_SERDES_SHIFT_SMT | RK_SERDES_FLAG_SMT)
#define RK_SERDES_PIN_CONFIG_SMT_ENABLE		(0x1 << RK_SERDES_SHIFT_SMT | RK_SERDES_FLAG_SMT)
#define RK_SERDES_PIN_CONFIG_SMT_DEFAULT	RK_SERDES_PIN_CONFIG_SMT_DISABLE

#define RK_SERDES_PIN_CONFIG_MAX		0xFFFFFFFFU

#define RK_SERDES_GPIO_PIN_A0			0x00000001U  /*!< Pin 0 selected    */
#define RK_SERDES_GPIO_PIN_A1			0x00000002U  /*!< Pin 1 selected    */
#define RK_SERDES_GPIO_PIN_A2			0x00000004U  /*!< Pin 2 selected    */
#define RK_SERDES_GPIO_PIN_A3			0x00000008U  /*!< Pin 3 selected    */
#define RK_SERDES_GPIO_PIN_A4			0x00000010U  /*!< Pin 4 selected    */
#define RK_SERDES_GPIO_PIN_A5			0x00000020U  /*!< Pin 5 selected    */
#define RK_SERDES_GPIO_PIN_A6			0x00000040U  /*!< Pin 6 selected    */
#define RK_SERDES_GPIO_PIN_A7			0x00000080U  /*!< Pin 7 selected    */
#define RK_SERDES_GPIO_PIN_B0			0x00000100U  /*!< Pin 8 selected    */
#define RK_SERDES_GPIO_PIN_B1			0x00000200U  /*!< Pin 9 selected    */
#define RK_SERDES_GPIO_PIN_B2			0x00000400U  /*!< Pin 10 selected   */
#define RK_SERDES_GPIO_PIN_B3			0x00000800U  /*!< Pin 11 selected   */
#define RK_SERDES_GPIO_PIN_B4			0x00001000U  /*!< Pin 12 selected   */
#define RK_SERDES_GPIO_PIN_B5			0x00002000U  /*!< Pin 13 selected   */
#define RK_SERDES_GPIO_PIN_B6			0x00004000U  /*!< Pin 14 selected   */
#define RK_SERDES_GPIO_PIN_B7			0x00008000U  /*!< Pin 15 selected   */
#define RK_SERDES_GPIO_PIN_C0			0x00010000U  /*!< Pin 16 selected   */
#define RK_SERDES_GPIO_PIN_C1			0x00020000U  /*!< Pin 17 selected   */
#define RK_SERDES_GPIO_PIN_C2			0x00040000U  /*!< Pin 18 selected   */
#define RK_SERDES_GPIO_PIN_C3			0x00080000U  /*!< Pin 19 selected   */
#define RK_SERDES_GPIO_PIN_C4			0x00100000U  /*!< Pin 20 selected   */
#define RK_SERDES_GPIO_PIN_C5			0x00200000U  /*!< Pin 21 selected   */
#define RK_SERDES_GPIO_PIN_C6			0x00400000U  /*!< Pin 22 selected   */
#define RK_SERDES_GPIO_PIN_C7			0x00800000U  /*!< Pin 23 selected   */
#define RK_SERDES_GPIO_PIN_D0			0x01000000U  /*!< Pin 24 selected   */
#define RK_SERDES_GPIO_PIN_D1			0x02000000U  /*!< Pin 25 selected   */
#define RK_SERDES_GPIO_PIN_D2			0x04000000U  /*!< Pin 26 selected   */
#define RK_SERDES_GPIO_PIN_D3			0x08000000U  /*!< Pin 27 selected   */
#define RK_SERDES_GPIO_PIN_D4			0x10000000U  /*!< Pin 28 selected   */
#define RK_SERDES_GPIO_PIN_D5			0x20000000U  /*!< Pin 29 selected   */
#define RK_SERDES_GPIO_PIN_D6			0x40000000U  /*!< Pin 30 selected   */
#define RK_SERDES_GPIO_PIN_D7			0x80000000U  /*!< Pin 31 selected   */
#define RK_SERDES_GPIO_PIN_ALL			(0xFFFFFFFFU)  /*!< All pins selected */

/* passthrough function */
#define RK_SERDES_PASSTHROUGH_GPI_GPO_0		(0)
#define RK_SERDES_PASSTHROUGH_GPI_GPO_1		(1)
#define RK_SERDES_PASSTHROUGH_GPI_GPO_2		(2)
#define RK_SERDES_PASSTHROUGH_GPI_GPO_3		(3)
#define RK_SERDES_PASSTHROUGH_GPI_GPO_4		(4)
#define RK_SERDES_PASSTHROUGH_GPI_GPO_5		(5)
#define RK_SERDES_PASSTHROUGH_GPI_GPO_6		(6)
#define RK_SERDES_PASSTHROUGH_IRQ		(7)
#define RK_SERDES_PASSTHROUGH_UART_0		(8)
#define RK_SERDES_PASSTHROUGH_UART_1		(9)
#define RK_SERDES_PASSTHROUGH_SPI		(10)
#endif /* __DT_BINDINGS_MFD_ROCKCHIP_SERDES_H */
