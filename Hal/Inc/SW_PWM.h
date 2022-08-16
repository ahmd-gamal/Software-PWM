/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  SW_PWM.h
 *       Module:  -
 *
 *  Description:  -     
 *  
 *********************************************************************************************************************/
#ifndef _SW_PWM_H
#define _SW_PWM_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
extern volatile uint8 onTime;
extern volatile uint8 offTime;

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
 /******************************************************************************
* \Syntax          : void SWPWM_init(uint32_t frequency_kh, uint8_t dutyCycle)                                  
* \Description     :  initiate PWM
*                                                       
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : frequency  - dutycucle                   
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void SWPWM_init(uint32 frequency_kh, uint8 dutyCycle);
 /******************************************************************************
* \Syntax          : void delay(uint16 value)                                  
* \Description     :  delay function
*                                                       
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : value                  
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void delay(uint16 value);

 /******************************************************************************
* \Syntax          : void SWPWM_START(void)                                  
* \Description     :  Start PWM
*                                                       
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                  
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void SWPWM_START(void);

void SWPWM_stop(void);

#endif  /* _SW_PWM_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: SW_PWM_Types.h
 *********************************************************************************************************************/
