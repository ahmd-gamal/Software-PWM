/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  GPT.c
 *        \brief  Digital Input Output Driver
 *
 *      \details  The Driver Configure Pins 
 *                Enable CLock Gate for External Peripherals
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "MCU_HW.h"
#include "GPT_Types.h"
#include "GPT.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/	

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

 /******************************************************************************
* \Syntax          : void Timer_init(uint32 frequency)                                      
* \Description     :  initiate timer 2
*                                                       
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : frequency                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void Timer_init(uint32 frequency)
{
	// assume the system is running with the HSI RC 8MHZ
	TIM2->PSC = (8000 / (frequency * 100)) - 1; // set the prescaler
	 // one pulse mode
	TIM2->CR1 |= 1 << 3;						   
}

/******************************************************************************
* \Syntax          : void Timer_set(uint16_t value)                                    
* \Description     :  Set time 2 with selected value
*                                                      
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : value                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void Timer_set(uint16 value)
{
	//set Auto reload value 
	TIM2->ARR = value;
}

/******************************************************************************
* \Syntax          :  void Timer_start()                                     
* \Description     :  
*                                                      
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void Timer_start()
{
	/* control register : start counting */
	TIM2->CR1 |= 1<<0;
}
void Timer_Stop()
{
	/* control register : stop counting */
	TIM2->CR1 &= ~(1<<0);
}
uint8 TIMER_getstate(void)
{
	// check overflow
	if(getBit(TIM2->SR,0)==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}



/**********************************************************************************************************************
 *  END OF FILE: GPT.c
 *********************************************************************************************************************/







  





