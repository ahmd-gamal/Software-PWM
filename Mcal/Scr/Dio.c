/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Dio.c
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
#include "Dio_Types.h"
#include "Dio.h"

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
* \Syntax          : void DIO_Init(uint8 pinNumber, uint8 port, uint8 direction)
* \Description     : Read register pin
*
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : pinNumber - port - direction
* \Parameters (out): None
* \Return value:   : None
*******************************************************************************/

void DIO_Init(uint8 pinNumber, uint8 port, uint8 direction)
{
	uint32 PortBase;

	switch (port)
	{
	case 'A':
		PortBase = GPIOA_BASE;
		break;
	case 'B':
		PortBase = GPIOB_BASE;
		break;
	case 'C':
		PortBase = GPIOC_BASE;
		break;
	case 'D':
		PortBase = GPIOD_BASE;
		break;
	case 'E':
		PortBase = GPIOE_BASE;
		break;
	case 'F':
		PortBase = GPIOF_BASE;
		break;
	case 'G':
		PortBase = GPIOG_BASE;
		break;
	}
	if (pinNumber <= 7)
	{
		// Set pin configrations ( 0-7)
		GPIO(PortBase)->CRL &= ~(0b1111 << (pinNumber * 4));
		GPIO(PortBase)->CRL |= direction << (pinNumber * 4);
	}
	else
	{
		// Set pin configrations ( 8-15)
		GPIO(PortBase)->CRH &= ~(0b1111 << (pinNumber * 4));
		GPIO(PortBase)->CRH |= direction << (pinNumber * 4);
	}
}

/******************************************************************************
* \Syntax          : void DIO_write(uint8 pinNumber, uint8 port, uint8 value)
* \Description     : write register pin
*
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : pinNumber - port - value
* \Parameters (out): None
* \Return value:   : None
*******************************************************************************/

void DIO_write(uint8 pinNumber, uint8 port, uint8 value)
{
	uint32 PortBase;
	uint8 bitOffset = 0;

	switch (port)
	{
	case 'A':
		PortBase = GPIOA_BASE;
		break;
	case 'B':
		PortBase = GPIOB_BASE;
		break;
	case 'C':
		PortBase = GPIOC_BASE;
		break;
	case 'D':
		PortBase = GPIOD_BASE;
		break;
	case 'E':
		PortBase = GPIOE_BASE;
		break;
	case 'F':
		PortBase = GPIOF_BASE;
		break;
	case 'G':
		PortBase = GPIOG_BASE;
		break;
	}
	switch (value)
	{
	case HIGH:
		bitOffset = pinNumber;
		break;
	case LOW:
		bitOffset = pinNumber + 16;
		break;
	}

	// set pin logic level
	GPIO(PortBase)->BSRR = 1 << bitOffset;
}

/******************************************************************************
* \Syntax          : void DIO_toggle(uint8 pinNumber, uint8 port)
* \Description     : toggle pin
*
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : NonepinNumber - port
* \Parameters (out): None
* \Return value:   : None
*******************************************************************************/
void DIO_toggle(uint8 pinNumber, uint8 port)
{
	uint32 PortBase;

	switch (port)
	{
	case 'A':
		PortBase = GPIOA_BASE;
		break;
	case 'B':
		PortBase = GPIOB_BASE;
		break;
	case 'C':
		PortBase = GPIOC_BASE;
		break;
	case 'D':
		PortBase = GPIOD_BASE;
		break;
	case 'E':
		PortBase = GPIOE_BASE;
		break;
	case 'F':
		PortBase = GPIOF_BASE;
		break;
	case 'G':
		PortBase = GPIOG_BASE;
		break;
	}
	
	GPIO(PortBase)->ODR ^= 1 << pinNumber;
}

/**********************************************************************************************************************
 *  END OF FILE: Dio.c
 *********************************************************************************************************************/







  





