/*******************************************************************************
* File Name: water_sensor_Bypass.h  
* Version 1.90
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_water_sensor_Bypass_H) /* Pins water_sensor_Bypass_H */
#define CY_PINS_water_sensor_Bypass_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "water_sensor_Bypass_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_90 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 water_sensor_Bypass__PORT == 15 && ((water_sensor_Bypass__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    water_sensor_Bypass_Write(uint8 value) ;
void    water_sensor_Bypass_SetDriveMode(uint8 mode) ;
uint8   water_sensor_Bypass_ReadDataReg(void) ;
uint8   water_sensor_Bypass_Read(void) ;
uint8   water_sensor_Bypass_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define water_sensor_Bypass_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define water_sensor_Bypass_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define water_sensor_Bypass_DM_RES_UP          PIN_DM_RES_UP
#define water_sensor_Bypass_DM_RES_DWN         PIN_DM_RES_DWN
#define water_sensor_Bypass_DM_OD_LO           PIN_DM_OD_LO
#define water_sensor_Bypass_DM_OD_HI           PIN_DM_OD_HI
#define water_sensor_Bypass_DM_STRONG          PIN_DM_STRONG
#define water_sensor_Bypass_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define water_sensor_Bypass_MASK               water_sensor_Bypass__MASK
#define water_sensor_Bypass_SHIFT              water_sensor_Bypass__SHIFT
#define water_sensor_Bypass_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define water_sensor_Bypass_PS                     (* (reg8 *) water_sensor_Bypass__PS)
/* Data Register */
#define water_sensor_Bypass_DR                     (* (reg8 *) water_sensor_Bypass__DR)
/* Port Number */
#define water_sensor_Bypass_PRT_NUM                (* (reg8 *) water_sensor_Bypass__PRT) 
/* Connect to Analog Globals */                                                  
#define water_sensor_Bypass_AG                     (* (reg8 *) water_sensor_Bypass__AG)                       
/* Analog MUX bux enable */
#define water_sensor_Bypass_AMUX                   (* (reg8 *) water_sensor_Bypass__AMUX) 
/* Bidirectional Enable */                                                        
#define water_sensor_Bypass_BIE                    (* (reg8 *) water_sensor_Bypass__BIE)
/* Bit-mask for Aliased Register Access */
#define water_sensor_Bypass_BIT_MASK               (* (reg8 *) water_sensor_Bypass__BIT_MASK)
/* Bypass Enable */
#define water_sensor_Bypass_BYP                    (* (reg8 *) water_sensor_Bypass__BYP)
/* Port wide control signals */                                                   
#define water_sensor_Bypass_CTL                    (* (reg8 *) water_sensor_Bypass__CTL)
/* Drive Modes */
#define water_sensor_Bypass_DM0                    (* (reg8 *) water_sensor_Bypass__DM0) 
#define water_sensor_Bypass_DM1                    (* (reg8 *) water_sensor_Bypass__DM1)
#define water_sensor_Bypass_DM2                    (* (reg8 *) water_sensor_Bypass__DM2) 
/* Input Buffer Disable Override */
#define water_sensor_Bypass_INP_DIS                (* (reg8 *) water_sensor_Bypass__INP_DIS)
/* LCD Common or Segment Drive */
#define water_sensor_Bypass_LCD_COM_SEG            (* (reg8 *) water_sensor_Bypass__LCD_COM_SEG)
/* Enable Segment LCD */
#define water_sensor_Bypass_LCD_EN                 (* (reg8 *) water_sensor_Bypass__LCD_EN)
/* Slew Rate Control */
#define water_sensor_Bypass_SLW                    (* (reg8 *) water_sensor_Bypass__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define water_sensor_Bypass_PRTDSI__CAPS_SEL       (* (reg8 *) water_sensor_Bypass__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define water_sensor_Bypass_PRTDSI__DBL_SYNC_IN    (* (reg8 *) water_sensor_Bypass__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define water_sensor_Bypass_PRTDSI__OE_SEL0        (* (reg8 *) water_sensor_Bypass__PRTDSI__OE_SEL0) 
#define water_sensor_Bypass_PRTDSI__OE_SEL1        (* (reg8 *) water_sensor_Bypass__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define water_sensor_Bypass_PRTDSI__OUT_SEL0       (* (reg8 *) water_sensor_Bypass__PRTDSI__OUT_SEL0) 
#define water_sensor_Bypass_PRTDSI__OUT_SEL1       (* (reg8 *) water_sensor_Bypass__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define water_sensor_Bypass_PRTDSI__SYNC_OUT       (* (reg8 *) water_sensor_Bypass__PRTDSI__SYNC_OUT) 


#if defined(water_sensor_Bypass__INTSTAT)  /* Interrupt Registers */

    #define water_sensor_Bypass_INTSTAT                (* (reg8 *) water_sensor_Bypass__INTSTAT)
    #define water_sensor_Bypass_SNAP                   (* (reg8 *) water_sensor_Bypass__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_water_sensor_Bypass_H */


/* [] END OF FILE */
