#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* Rx_1 */
#define Rx_1__0__INTTYPE CYREG_PICU12_INTTYPE6
#define Rx_1__0__MASK 0x40u
#define Rx_1__0__PC CYREG_PRT12_PC6
#define Rx_1__0__PORT 12u
#define Rx_1__0__SHIFT 6u
#define Rx_1__AG CYREG_PRT12_AG
#define Rx_1__BIE CYREG_PRT12_BIE
#define Rx_1__BIT_MASK CYREG_PRT12_BIT_MASK
#define Rx_1__BYP CYREG_PRT12_BYP
#define Rx_1__DM0 CYREG_PRT12_DM0
#define Rx_1__DM1 CYREG_PRT12_DM1
#define Rx_1__DM2 CYREG_PRT12_DM2
#define Rx_1__DR CYREG_PRT12_DR
#define Rx_1__INP_DIS CYREG_PRT12_INP_DIS
#define Rx_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define Rx_1__MASK 0x40u
#define Rx_1__PORT 12u
#define Rx_1__PRT CYREG_PRT12_PRT
#define Rx_1__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define Rx_1__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define Rx_1__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define Rx_1__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define Rx_1__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define Rx_1__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define Rx_1__PS CYREG_PRT12_PS
#define Rx_1__SHIFT 6u
#define Rx_1__SIO_CFG CYREG_PRT12_SIO_CFG
#define Rx_1__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define Rx_1__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define Rx_1__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define Rx_1__SLW CYREG_PRT12_SLW

/* Tx_1 */
#define Tx_1__0__INTTYPE CYREG_PICU12_INTTYPE7
#define Tx_1__0__MASK 0x80u
#define Tx_1__0__PC CYREG_PRT12_PC7
#define Tx_1__0__PORT 12u
#define Tx_1__0__SHIFT 7u
#define Tx_1__AG CYREG_PRT12_AG
#define Tx_1__BIE CYREG_PRT12_BIE
#define Tx_1__BIT_MASK CYREG_PRT12_BIT_MASK
#define Tx_1__BYP CYREG_PRT12_BYP
#define Tx_1__DM0 CYREG_PRT12_DM0
#define Tx_1__DM1 CYREG_PRT12_DM1
#define Tx_1__DM2 CYREG_PRT12_DM2
#define Tx_1__DR CYREG_PRT12_DR
#define Tx_1__INP_DIS CYREG_PRT12_INP_DIS
#define Tx_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define Tx_1__MASK 0x80u
#define Tx_1__PORT 12u
#define Tx_1__PRT CYREG_PRT12_PRT
#define Tx_1__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define Tx_1__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define Tx_1__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define Tx_1__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define Tx_1__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define Tx_1__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define Tx_1__PS CYREG_PRT12_PS
#define Tx_1__SHIFT 7u
#define Tx_1__SIO_CFG CYREG_PRT12_SIO_CFG
#define Tx_1__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define Tx_1__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define Tx_1__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define Tx_1__SLW CYREG_PRT12_SLW

/* UART_1_BUART */
#define UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB08_09_ACTL
#define UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB08_09_CTL
#define UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB08_09_CTL
#define UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB08_09_CTL
#define UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_B1_UDB08_09_CTL
#define UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_B1_UDB08_09_MSK
#define UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_B1_UDB08_09_MSK
#define UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_B1_UDB08_09_MSK
#define UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB08_09_MSK
#define UART_1_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_B1_UDB08_ACTL
#define UART_1_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_B1_UDB08_CTL
#define UART_1_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_B1_UDB08_ST_CTL
#define UART_1_BUART_sRX_RxBitCounter__COUNT_REG CYREG_B1_UDB08_CTL
#define UART_1_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_B1_UDB08_ST_CTL
#define UART_1_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_B1_UDB08_MSK
#define UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB08_09_ACTL
#define UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_B1_UDB08_09_ST
#define UART_1_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_B1_UDB08_MSK
#define UART_1_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_B1_UDB08_ACTL
#define UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_B1_UDB08_ST_CTL
#define UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_B1_UDB08_ST_CTL
#define UART_1_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_B1_UDB08_ST
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_B1_UDB08_09_A0
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_B1_UDB08_09_A1
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_B1_UDB08_09_D0
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_B1_UDB08_09_D1
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB08_09_ACTL
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_B1_UDB08_09_F0
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_B1_UDB08_09_F1
#define UART_1_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_B1_UDB08_A0_A1
#define UART_1_BUART_sRX_RxShifter_u0__A0_REG CYREG_B1_UDB08_A0
#define UART_1_BUART_sRX_RxShifter_u0__A1_REG CYREG_B1_UDB08_A1
#define UART_1_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_B1_UDB08_D0_D1
#define UART_1_BUART_sRX_RxShifter_u0__D0_REG CYREG_B1_UDB08_D0
#define UART_1_BUART_sRX_RxShifter_u0__D1_REG CYREG_B1_UDB08_D1
#define UART_1_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_B1_UDB08_ACTL
#define UART_1_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_B1_UDB08_F0_F1
#define UART_1_BUART_sRX_RxShifter_u0__F0_REG CYREG_B1_UDB08_F0
#define UART_1_BUART_sRX_RxShifter_u0__F1_REG CYREG_B1_UDB08_F1
#define UART_1_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxSts__3__MASK 0x08u
#define UART_1_BUART_sRX_RxSts__3__POS 3
#define UART_1_BUART_sRX_RxSts__4__MASK 0x10u
#define UART_1_BUART_sRX_RxSts__4__POS 4
#define UART_1_BUART_sRX_RxSts__5__MASK 0x20u
#define UART_1_BUART_sRX_RxSts__5__POS 5
#define UART_1_BUART_sRX_RxSts__MASK 0x38u
#define UART_1_BUART_sRX_RxSts__MASK_REG CYREG_B1_UDB11_MSK
#define UART_1_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_B1_UDB11_ACTL
#define UART_1_BUART_sRX_RxSts__STATUS_REG CYREG_B1_UDB11_ST
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B0_UDB09_10_A0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B0_UDB09_10_A1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B0_UDB09_10_D0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B0_UDB09_10_D1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB09_10_ACTL
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B0_UDB09_10_F0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B0_UDB09_10_F1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B0_UDB09_A0_A1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B0_UDB09_A0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B0_UDB09_A1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B0_UDB09_D0_D1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B0_UDB09_D0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B0_UDB09_D1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B0_UDB09_ACTL
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B0_UDB09_F0_F1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B0_UDB09_F0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B0_UDB09_F1
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B0_UDB08_09_A0
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B0_UDB08_09_A1
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B0_UDB08_09_D0
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B0_UDB08_09_D1
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB08_09_ACTL
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B0_UDB08_09_F0
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B0_UDB08_09_F1
#define UART_1_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B0_UDB08_A0_A1
#define UART_1_BUART_sTX_TxShifter_u0__A0_REG CYREG_B0_UDB08_A0
#define UART_1_BUART_sTX_TxShifter_u0__A1_REG CYREG_B0_UDB08_A1
#define UART_1_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B0_UDB08_D0_D1
#define UART_1_BUART_sTX_TxShifter_u0__D0_REG CYREG_B0_UDB08_D0
#define UART_1_BUART_sTX_TxShifter_u0__D1_REG CYREG_B0_UDB08_D1
#define UART_1_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB08_ACTL
#define UART_1_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B0_UDB08_F0_F1
#define UART_1_BUART_sTX_TxShifter_u0__F0_REG CYREG_B0_UDB08_F0
#define UART_1_BUART_sTX_TxShifter_u0__F1_REG CYREG_B0_UDB08_F1
#define UART_1_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_1_BUART_sTX_TxSts__0__POS 0
#define UART_1_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_1_BUART_sTX_TxSts__1__POS 1
#define UART_1_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB08_09_ACTL
#define UART_1_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B0_UDB08_09_ST
#define UART_1_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_1_BUART_sTX_TxSts__2__POS 2
#define UART_1_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_1_BUART_sTX_TxSts__3__POS 3
#define UART_1_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_1_BUART_sTX_TxSts__MASK_REG CYREG_B0_UDB08_MSK
#define UART_1_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB08_ACTL
#define UART_1_BUART_sTX_TxSts__STATUS_REG CYREG_B0_UDB08_ST

/* UART_1_IntClock */
#define UART_1_IntClock__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define UART_1_IntClock__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define UART_1_IntClock__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define UART_1_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_1_IntClock__INDEX 0x01u
#define UART_1_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_1_IntClock__PM_ACT_MSK 0x02u
#define UART_1_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_1_IntClock__PM_STBY_MSK 0x02u

/* water_sensor_ADC_SAR */
#define water_sensor_ADC_SAR__CLK CYREG_SAR1_CLK
#define water_sensor_ADC_SAR__CSR0 CYREG_SAR1_CSR0
#define water_sensor_ADC_SAR__CSR1 CYREG_SAR1_CSR1
#define water_sensor_ADC_SAR__CSR2 CYREG_SAR1_CSR2
#define water_sensor_ADC_SAR__CSR3 CYREG_SAR1_CSR3
#define water_sensor_ADC_SAR__CSR4 CYREG_SAR1_CSR4
#define water_sensor_ADC_SAR__CSR5 CYREG_SAR1_CSR5
#define water_sensor_ADC_SAR__CSR6 CYREG_SAR1_CSR6
#define water_sensor_ADC_SAR__PM_ACT_CFG CYREG_PM_ACT_CFG11
#define water_sensor_ADC_SAR__PM_ACT_MSK 0x02u
#define water_sensor_ADC_SAR__PM_STBY_CFG CYREG_PM_STBY_CFG11
#define water_sensor_ADC_SAR__PM_STBY_MSK 0x02u
#define water_sensor_ADC_SAR__SW0 CYREG_SAR1_SW0
#define water_sensor_ADC_SAR__SW2 CYREG_SAR1_SW2
#define water_sensor_ADC_SAR__SW3 CYREG_SAR1_SW3
#define water_sensor_ADC_SAR__SW4 CYREG_SAR1_SW4
#define water_sensor_ADC_SAR__SW6 CYREG_SAR1_SW6
#define water_sensor_ADC_SAR__TR0 CYREG_SAR1_TR0
#define water_sensor_ADC_SAR__WRK0 CYREG_SAR1_WRK0
#define water_sensor_ADC_SAR__WRK1 CYREG_SAR1_WRK1

/* water_sensor_Bypass */
#define water_sensor_Bypass__0__INTTYPE CYREG_PICU0_INTTYPE2
#define water_sensor_Bypass__0__MASK 0x04u
#define water_sensor_Bypass__0__PC CYREG_PRT0_PC2
#define water_sensor_Bypass__0__PORT 0u
#define water_sensor_Bypass__0__SHIFT 2u
#define water_sensor_Bypass__AG CYREG_PRT0_AG
#define water_sensor_Bypass__AMUX CYREG_PRT0_AMUX
#define water_sensor_Bypass__BIE CYREG_PRT0_BIE
#define water_sensor_Bypass__BIT_MASK CYREG_PRT0_BIT_MASK
#define water_sensor_Bypass__BYP CYREG_PRT0_BYP
#define water_sensor_Bypass__CTL CYREG_PRT0_CTL
#define water_sensor_Bypass__DM0 CYREG_PRT0_DM0
#define water_sensor_Bypass__DM1 CYREG_PRT0_DM1
#define water_sensor_Bypass__DM2 CYREG_PRT0_DM2
#define water_sensor_Bypass__DR CYREG_PRT0_DR
#define water_sensor_Bypass__INP_DIS CYREG_PRT0_INP_DIS
#define water_sensor_Bypass__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define water_sensor_Bypass__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define water_sensor_Bypass__LCD_EN CYREG_PRT0_LCD_EN
#define water_sensor_Bypass__MASK 0x04u
#define water_sensor_Bypass__PORT 0u
#define water_sensor_Bypass__PRT CYREG_PRT0_PRT
#define water_sensor_Bypass__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define water_sensor_Bypass__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define water_sensor_Bypass__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define water_sensor_Bypass__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define water_sensor_Bypass__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define water_sensor_Bypass__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define water_sensor_Bypass__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define water_sensor_Bypass__PS CYREG_PRT0_PS
#define water_sensor_Bypass__SHIFT 2u
#define water_sensor_Bypass__SLW CYREG_PRT0_SLW

/* water_sensor_IRQ */
#define water_sensor_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define water_sensor_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define water_sensor_IRQ__INTC_MASK 0x01u
#define water_sensor_IRQ__INTC_NUMBER 0u
#define water_sensor_IRQ__INTC_PRIOR_NUM 7u
#define water_sensor_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define water_sensor_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define water_sensor_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* water_sensor_theACLK */
#define water_sensor_theACLK__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define water_sensor_theACLK__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define water_sensor_theACLK__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define water_sensor_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define water_sensor_theACLK__INDEX 0x00u
#define water_sensor_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define water_sensor_theACLK__PM_ACT_MSK 0x01u
#define water_sensor_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define water_sensor_theACLK__PM_STBY_MSK 0x01u

/* water_level_Pin */
#define water_level_Pin__0__INTTYPE CYREG_PICU3_INTTYPE1
#define water_level_Pin__0__MASK 0x02u
#define water_level_Pin__0__PC CYREG_PRT3_PC1
#define water_level_Pin__0__PORT 3u
#define water_level_Pin__0__SHIFT 1u
#define water_level_Pin__AG CYREG_PRT3_AG
#define water_level_Pin__AMUX CYREG_PRT3_AMUX
#define water_level_Pin__BIE CYREG_PRT3_BIE
#define water_level_Pin__BIT_MASK CYREG_PRT3_BIT_MASK
#define water_level_Pin__BYP CYREG_PRT3_BYP
#define water_level_Pin__CTL CYREG_PRT3_CTL
#define water_level_Pin__DM0 CYREG_PRT3_DM0
#define water_level_Pin__DM1 CYREG_PRT3_DM1
#define water_level_Pin__DM2 CYREG_PRT3_DM2
#define water_level_Pin__DR CYREG_PRT3_DR
#define water_level_Pin__INP_DIS CYREG_PRT3_INP_DIS
#define water_level_Pin__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define water_level_Pin__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define water_level_Pin__LCD_EN CYREG_PRT3_LCD_EN
#define water_level_Pin__MASK 0x02u
#define water_level_Pin__PORT 3u
#define water_level_Pin__PRT CYREG_PRT3_PRT
#define water_level_Pin__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define water_level_Pin__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define water_level_Pin__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define water_level_Pin__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define water_level_Pin__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define water_level_Pin__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define water_level_Pin__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define water_level_Pin__PS CYREG_PRT3_PS
#define water_level_Pin__SHIFT 1u
#define water_level_Pin__SLW CYREG_PRT3_SLW

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "Design01"
#define CY_VERSION "PSoC Creator  4.0 Update 1"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 12u
#define CYDEV_CHIP_DIE_PSOC5LP 19u
#define CYDEV_CHIP_DIE_PSOC5TM 20u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 4u
#define CYDEV_CHIP_FAMILY_FM3 5u
#define CYDEV_CHIP_FAMILY_FM4 6u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 12u
#define CYDEV_CHIP_MEMBER_4C 18u
#define CYDEV_CHIP_MEMBER_4D 8u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 13u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 11u
#define CYDEV_CHIP_MEMBER_4I 17u
#define CYDEV_CHIP_MEMBER_4J 9u
#define CYDEV_CHIP_MEMBER_4K 10u
#define CYDEV_CHIP_MEMBER_4L 16u
#define CYDEV_CHIP_MEMBER_4M 15u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4P 14u
#define CYDEV_CHIP_MEMBER_4Q 7u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 20u
#define CYDEV_CHIP_MEMBER_5B 19u
#define CYDEV_CHIP_MEMBER_FM3 24u
#define CYDEV_CHIP_MEMBER_FM4 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 21u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 22u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 23u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000001u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
