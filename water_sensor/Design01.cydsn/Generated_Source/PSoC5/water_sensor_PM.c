/*******************************************************************************
* File Name: water_sensor_PM.c
* Version 3.0
*
* Description:
*  This file provides Sleep/WakeUp APIs functionality.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "water_sensor.h"


/***************************************
* Local data allocation
***************************************/

static water_sensor_BACKUP_STRUCT  water_sensor_backup =
{
    water_sensor_DISABLED
};


/*******************************************************************************
* Function Name: water_sensor_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void water_sensor_SaveConfig(void)
{
    /* All configuration registers are marked as [reset_all_retention] */
}


/*******************************************************************************
* Function Name: water_sensor_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void water_sensor_RestoreConfig(void)
{
    /* All congiguration registers are marked as [reset_all_retention] */
}


/*******************************************************************************
* Function Name: water_sensor_Sleep
********************************************************************************
*
* Summary:
*  This is the preferred routine to prepare the component for sleep.
*  The water_sensor_Sleep() routine saves the current component state,
*  then it calls the ADC_Stop() function.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  water_sensor_backup - The structure field 'enableState' is modified
*  depending on the enable state of the block before entering to sleep mode.
*
*******************************************************************************/
void water_sensor_Sleep(void)
{
    if((water_sensor_PWRMGR_SAR_REG  & water_sensor_ACT_PWR_SAR_EN) != 0u)
    {
        if((water_sensor_SAR_CSR0_REG & water_sensor_SAR_SOF_START_CONV) != 0u)
        {
            water_sensor_backup.enableState = water_sensor_ENABLED | water_sensor_STARTED;
        }
        else
        {
            water_sensor_backup.enableState = water_sensor_ENABLED;
        }
        water_sensor_Stop();
    }
    else
    {
        water_sensor_backup.enableState = water_sensor_DISABLED;
    }
}


/*******************************************************************************
* Function Name: water_sensor_Wakeup
********************************************************************************
*
* Summary:
*  This is the preferred routine to restore the component to the state when
*  water_sensor_Sleep() was called. If the component was enabled before the
*  water_sensor_Sleep() function was called, the
*  water_sensor_Wakeup() function also re-enables the component.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  water_sensor_backup - The structure field 'enableState' is used to
*  restore the enable state of block after wakeup from sleep mode.
*
*******************************************************************************/
void water_sensor_Wakeup(void)
{
    if(water_sensor_backup.enableState != water_sensor_DISABLED)
    {
        water_sensor_Enable();
        #if(water_sensor_DEFAULT_CONV_MODE != water_sensor__HARDWARE_TRIGGER)
            if((water_sensor_backup.enableState & water_sensor_STARTED) != 0u)
            {
                water_sensor_StartConvert();
            }
        #endif /* End water_sensor_DEFAULT_CONV_MODE != water_sensor__HARDWARE_TRIGGER */
    }
}


/* [] END OF FILE */
