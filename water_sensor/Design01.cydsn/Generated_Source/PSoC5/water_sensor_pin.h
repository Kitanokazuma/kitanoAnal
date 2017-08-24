/*******************************************************************************
* File Name: water_sensor_pin.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_water_sensor_pin_H) /* Pins water_sensor_pin_H */
#define CY_PINS_water_sensor_pin_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "water_sensor_pin_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 water_sensor_pin__PORT == 15 && ((water_sensor_pin__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    water_sensor_pin_Write(uint8 value);
void    water_sensor_pin_SetDriveMode(uint8 mode);
uint8   water_sensor_pin_ReadDataReg(void);
uint8   water_sensor_pin_Read(void);
void    water_sensor_pin_SetInterruptMode(uint16 position, uint16 mode);
uint8   water_sensor_pin_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the water_sensor_pin_SetDriveMode() function.
     *  @{
     */
        #define water_sensor_pin_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define water_sensor_pin_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define water_sensor_pin_DM_RES_UP          PIN_DM_RES_UP
        #define water_sensor_pin_DM_RES_DWN         PIN_DM_RES_DWN
        #define water_sensor_pin_DM_OD_LO           PIN_DM_OD_LO
        #define water_sensor_pin_DM_OD_HI           PIN_DM_OD_HI
        #define water_sensor_pin_DM_STRONG          PIN_DM_STRONG
        #define water_sensor_pin_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define water_sensor_pin_MASK               water_sensor_pin__MASK
#define water_sensor_pin_SHIFT              water_sensor_pin__SHIFT
#define water_sensor_pin_WIDTH              1u

/* Interrupt constants */
#if defined(water_sensor_pin__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in water_sensor_pin_SetInterruptMode() function.
     *  @{
     */
        #define water_sensor_pin_INTR_NONE      (uint16)(0x0000u)
        #define water_sensor_pin_INTR_RISING    (uint16)(0x0001u)
        #define water_sensor_pin_INTR_FALLING   (uint16)(0x0002u)
        #define water_sensor_pin_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define water_sensor_pin_INTR_MASK      (0x01u) 
#endif /* (water_sensor_pin__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define water_sensor_pin_PS                     (* (reg8 *) water_sensor_pin__PS)
/* Data Register */
#define water_sensor_pin_DR                     (* (reg8 *) water_sensor_pin__DR)
/* Port Number */
#define water_sensor_pin_PRT_NUM                (* (reg8 *) water_sensor_pin__PRT) 
/* Connect to Analog Globals */                                                  
#define water_sensor_pin_AG                     (* (reg8 *) water_sensor_pin__AG)                       
/* Analog MUX bux enable */
#define water_sensor_pin_AMUX                   (* (reg8 *) water_sensor_pin__AMUX) 
/* Bidirectional Enable */                                                        
#define water_sensor_pin_BIE                    (* (reg8 *) water_sensor_pin__BIE)
/* Bit-mask for Aliased Register Access */
#define water_sensor_pin_BIT_MASK               (* (reg8 *) water_sensor_pin__BIT_MASK)
/* Bypass Enable */
#define water_sensor_pin_BYP                    (* (reg8 *) water_sensor_pin__BYP)
/* Port wide control signals */                                                   
#define water_sensor_pin_CTL                    (* (reg8 *) water_sensor_pin__CTL)
/* Drive Modes */
#define water_sensor_pin_DM0                    (* (reg8 *) water_sensor_pin__DM0) 
#define water_sensor_pin_DM1                    (* (reg8 *) water_sensor_pin__DM1)
#define water_sensor_pin_DM2                    (* (reg8 *) water_sensor_pin__DM2) 
/* Input Buffer Disable Override */
#define water_sensor_pin_INP_DIS                (* (reg8 *) water_sensor_pin__INP_DIS)
/* LCD Common or Segment Drive */
#define water_sensor_pin_LCD_COM_SEG            (* (reg8 *) water_sensor_pin__LCD_COM_SEG)
/* Enable Segment LCD */
#define water_sensor_pin_LCD_EN                 (* (reg8 *) water_sensor_pin__LCD_EN)
/* Slew Rate Control */
#define water_sensor_pin_SLW                    (* (reg8 *) water_sensor_pin__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define water_sensor_pin_PRTDSI__CAPS_SEL       (* (reg8 *) water_sensor_pin__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define water_sensor_pin_PRTDSI__DBL_SYNC_IN    (* (reg8 *) water_sensor_pin__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define water_sensor_pin_PRTDSI__OE_SEL0        (* (reg8 *) water_sensor_pin__PRTDSI__OE_SEL0) 
#define water_sensor_pin_PRTDSI__OE_SEL1        (* (reg8 *) water_sensor_pin__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define water_sensor_pin_PRTDSI__OUT_SEL0       (* (reg8 *) water_sensor_pin__PRTDSI__OUT_SEL0) 
#define water_sensor_pin_PRTDSI__OUT_SEL1       (* (reg8 *) water_sensor_pin__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define water_sensor_pin_PRTDSI__SYNC_OUT       (* (reg8 *) water_sensor_pin__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(water_sensor_pin__SIO_CFG)
    #define water_sensor_pin_SIO_HYST_EN        (* (reg8 *) water_sensor_pin__SIO_HYST_EN)
    #define water_sensor_pin_SIO_REG_HIFREQ     (* (reg8 *) water_sensor_pin__SIO_REG_HIFREQ)
    #define water_sensor_pin_SIO_CFG            (* (reg8 *) water_sensor_pin__SIO_CFG)
    #define water_sensor_pin_SIO_DIFF           (* (reg8 *) water_sensor_pin__SIO_DIFF)
#endif /* (water_sensor_pin__SIO_CFG) */

/* Interrupt Registers */
#if defined(water_sensor_pin__INTSTAT)
    #define water_sensor_pin_INTSTAT            (* (reg8 *) water_sensor_pin__INTSTAT)
    #define water_sensor_pin_SNAP               (* (reg8 *) water_sensor_pin__SNAP)
    
	#define water_sensor_pin_0_INTTYPE_REG 		(* (reg8 *) water_sensor_pin__0__INTTYPE)
#endif /* (water_sensor_pin__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_water_sensor_pin_H */


/* [] END OF FILE */
