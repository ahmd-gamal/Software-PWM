/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Dio.h
 *       Module:  dio
 *
 *  Description:  header file for Port Module    
 *  
 *********************************************************************************************************************/
#ifndef DIO_H
#define DIO_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Dio_Cfg.h"
#include "Dio_Types.h"
#include "MCU_HW.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
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

void DIO_Init(uint8 pinNumber, uint8 port, uint8 direction);

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

void DIO_write(uint8 pinNumber, uint8 port, uint8 value);

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
void DIO_toggle(uint8 pinNumber, uint8 port);


#endif
/**********************************************************************************************************************
 *  END OF FILE: Dio.h
 *********************************************************************************************************************/
