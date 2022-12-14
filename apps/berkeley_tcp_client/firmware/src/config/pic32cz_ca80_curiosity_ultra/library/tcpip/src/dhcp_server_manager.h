/*******************************************************************************
  DHCP Server manager private API for Microchip TCP/IP Stack

  Company:
    Microchip Technology Inc.
    
  File Name:
    dhcp_server_manager.h

  Summary:
    DHCP Server manager private API for Microchip TCP/IP Stack

  Description:
    This file provides the TCP/IP Stack DHCP Server Manager Private API definitions.
*******************************************************************************/
// DOM-IGNORE-BEGIN

/*****************************************************************************
 Copyright (C) 2012-2021 Microchip Technology Inc. and its subsidiaries.

Microchip Technology Inc. and its subsidiaries.

Subject to your compliance with these terms, you may use Microchip software 
and any derivatives exclusively with Microchip products. It is your 
responsibility to comply with third party license terms applicable to your 
use of third party software (including open source software) that may 
accompany Microchip software.

THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A PARTICULAR 
PURPOSE.

IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE 
FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN 
ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY, 
THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*****************************************************************************/







// DOM-IGNORE-END

#ifndef _DHCP_SERVER_MANAGER_H_
#define _DHCP_SERVER_MANAGER_H_




/*****************************************************************************
  Function:
    bool TCPIP_DHCPS_Initialize(const TCPIP_STACK_MODULE_CTRL* const stackCtrl, const TCPIP_DHCPS_MODULE_CONFIG* pDhcpConfig);

  Summary:
    Resets the DHCP server module for the specified interface.

  Description:
    Resets the DHCP server module for the specified interface.

  Precondition:
    None

  Parameters:
    stackCtrl - pointer to stack structure specifying the interface to initialize

  Returns:
    None

  Remarks:
    This function should be called internally just once per interface
    by the stack manager.
***************************************************************************/
bool TCPIP_DHCPS_Initialize(const TCPIP_STACK_MODULE_CTRL* const stackCtrl, const TCPIP_DHCPS_MODULE_CONFIG* pDhcpConfig);


/*****************************************************************************
  Function:
    bool TCPIP_DHCPS_Deinitialize(const TCPIP_STACK_MODULE_CTRL* const stackCtrl);

  Summary:
    Turns off the DHCP server module for the specified interface.

  Description:
    Closes out UDP socket.

  Precondition:
    None

  Parameters:
    stackData - pointer to stack structure specifying the interface to deinitialize

  Returns:
    None

  Remarks:
    This function should be called internally just once per interface
    by the stack manager.
***************************************************************************/
void TCPIP_DHCPS_Deinitialize(const TCPIP_STACK_MODULE_CTRL* const stackCtrl);

#endif  // _DHCP_SERVER_MANAGER_H_


