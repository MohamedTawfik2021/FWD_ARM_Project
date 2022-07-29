/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  DIO.h
 *       Module:  DIO
 *
 *  Description:  Digital IN/OUT GPIO Configuration    
 *  
 *********************************************************************************************************************/
#ifndef DIO_H
#define DIO_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include"Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum 
{   
    PIN_0,
    PIN_1,
    PIN_2,
    PIN_3,
    PIN_4,
    PIN_5,
    PIN_6,
    PIN_7

}Dio_PinType;

typedef enum 
{
   PORT_A,
   PORT_B,
   PORT_C,
   PORT_D,
   PORT_E,
   PORT_F

}Dio_PortType;

typedef enum 
{
    LOW,
    HIGH

}Dio_LevelType;

typedef uint8 Dio_PortLevelType;


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
Dio_LevelType Dio_ReadPin (Dio_PortType port ,Dio_PinType pin);
void Dio_WritePin (Dio_PortType port ,Dio_PinType pin , Dio_LevelType level);
Dio_LevelType Dio_Flipchannel (Dio_PortType port ,Dio_PinType pin);
Dio_PortLevelType Dio_ReadPort (Dio_PortType port);
void Dio_WritePort(Dio_PortType port , Dio_PortLevelType level);
 
#endif /*DIO_H*/

/**********************************************************************************************************************
 *  END OF FILE: DIO.h
 *********************************************************************************************************************/
