/*******************************************************************************
  System Configuration Header

  File Name:
    configuration.h

  Summary:
    Build-time configuration header for the system defined by this project.

  Description:
    An MPLAB Project may have multiple configurations.  This file defines the
    build-time options for a single configuration.

  Remarks:
    This configuration header must not define any prototypes or data
    definitions (or include any files that do).  It only provides macro
    definitions for build-time configuration options

*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
/*  This section Includes other configuration headers necessary to completely
    define this configuration.
*/

#include "user.h"
#include "device.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: System Configuration
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
// *****************************************************************************
// Section: System Service Configuration
// *****************************************************************************
// *****************************************************************************
/* TIME System Service Configuration Options */
#define SYS_TIME_INDEX_0                            (0)
#define SYS_TIME_MAX_TIMERS                         (5)
#define SYS_TIME_HW_COUNTER_WIDTH                   (32)
#define SYS_TIME_TICK_FREQ_IN_HZ                    (1024)

#define SYS_CONSOLE_INDEX_0                       0





/* File System Service Configuration */

#define SYS_FS_MEDIA_NUMBER               (1U)
#define SYS_FS_VOLUME_NUMBER              (1U)

#define SYS_FS_AUTOMOUNT_ENABLE           false
#define SYS_FS_MAX_FILES                  (25U)
#define SYS_FS_MAX_FILE_SYSTEM_TYPE       (1U)
#define SYS_FS_MEDIA_MAX_BLOCK_SIZE       (512U)
#define SYS_FS_MEDIA_MANAGER_BUFFER_SIZE  (2048U)
#define SYS_FS_USE_LFN                    (1)
#define SYS_FS_FILE_NAME_LEN              (255U)
#define SYS_FS_CWD_STRING_LEN             (1024)

/* File System RTOS Configurations*/
#define SYS_FS_STACK_SIZE                 1024
#define SYS_FS_PRIORITY                   1

#define SYS_FS_FAT_VERSION                "v0.15"
#define SYS_FS_FAT_READONLY               false
#define SYS_FS_FAT_CODE_PAGE              437
#define SYS_FS_FAT_MAX_SS                 SYS_FS_MEDIA_MAX_BLOCK_SIZE
#define SYS_FS_FAT_ALIGNED_BUFFER_LEN     512







#define SYS_CMD_ENABLE
#define SYS_CMD_DEVICE_MAX_INSTANCES       SYS_CONSOLE_DEVICE_MAX_INSTANCES
#define SYS_CMD_PRINT_BUFFER_SIZE          2560U
#define SYS_CMD_BUFFER_DMA_READY

/* Command System Service RTOS Configurations*/
#define SYS_CMD_RTOS_STACK_SIZE                2560
#define SYS_CMD_RTOS_TASK_PRIORITY             1


#define SYS_DEBUG_ENABLE
#define SYS_DEBUG_GLOBAL_ERROR_LEVEL       SYS_ERROR_DEBUG
#define SYS_DEBUG_BUFFER_DMA_READY
#define SYS_DEBUG_USE_CONSOLE


#define SYS_CONSOLE_DEVICE_MAX_INSTANCES   			(1U)
#define SYS_CONSOLE_UART_MAX_INSTANCES 	   			(1U)
#define SYS_CONSOLE_USB_CDC_MAX_INSTANCES 	   		(0U)
#define SYS_CONSOLE_PRINT_BUFFER_SIZE        		(200U)




// *****************************************************************************
// *****************************************************************************
// Section: Driver Configuration
// *****************************************************************************
// *****************************************************************************
/*** MIIM Driver Configuration ***/
#define DRV_MIIM_ETH_MODULE_ID_0                ETH_BASE_ADDRESS
#define DRV_MIIM_DRIVER_INDEX_0                 0
#define DRV_MIIM_INSTANCES_NUMBER           1
#define DRV_MIIM_INSTANCE_OPERATIONS        4
#define DRV_MIIM_INSTANCE_CLIENTS           2
#define DRV_MIIM_CLIENT_OP_PROTECTION   false
#define DRV_MIIM_COMMANDS   true
#define DRV_MIIM_DRIVER_OBJECT              DRV_MIIM_OBJECT_BASE_Default            

/* MIIM RTOS Configurations*/
#define DRV_MIIM_RTOS_STACK_SIZE                1024
#define DRV_MIIM_RTOS_TASK_PRIORITY             1


/* SDMMC Driver Global Configuration Options */
#define DRV_SDMMC_INSTANCES_NUMBER                       (1U)


/*** SDMMC Driver Instance 0 Configuration ***/
#define DRV_SDMMC_INDEX_0                                0
#define DRV_SDMMC_IDX0_CLIENTS_NUMBER                    1
#define DRV_SDMMC_IDX0_QUEUE_SIZE                        2
#define DRV_SDMMC_IDX0_PROTOCOL_SUPPORT                  DRV_SDMMC_PROTOCOL_SD
#define DRV_SDMMC_IDX0_CONFIG_SPEED_MODE                 DRV_SDMMC_SPEED_MODE_DEFAULT
#define DRV_SDMMC_IDX0_CONFIG_BUS_WIDTH                  DRV_SDMMC_BUS_WIDTH_4_BIT
#define DRV_SDMMC_IDX0_CARD_DETECTION_METHOD             DRV_SDMMC_CD_METHOD_USE_SDCD

/* SDMMC Driver Instance 0 RTOS Configurations*/
#define DRV_SDMMC_STACK_SIZE_IDX0                         1024
#define DRV_SDMMC_PRIORITY_IDX0                           1
#define DRV_SDMMC_RTOS_DELAY_IDX0                         10U




// *****************************************************************************
// *****************************************************************************
// Section: Middleware & Other Library Configuration
// *****************************************************************************
// *****************************************************************************

/*** ICMPv4 Server Configuration ***/
#define TCPIP_STACK_USE_ICMP_SERVER
#define TCPIP_ICMP_ECHO_ALLOW_BROADCASTS    false

/*** ICMPv4 Client Configuration ***/
#define TCPIP_STACK_USE_ICMP_CLIENT
#define TCPIP_ICMP_ECHO_REQUEST_TIMEOUT        500
#define TCPIP_ICMP_TASK_TICK_RATE              33
#define TCPIP_STACK_MAX_CLIENT_ECHO_REQUESTS   4
#define TCPIP_ICMP_COMMAND_ENABLE              false

/******************************************************************************/
/*wolfSSL TLS Layer Configuration*/
/******************************************************************************/

#define WOLFSSL_ALT_NAMES
#define WOLFSSL_DER_LOAD
#define KEEP_OUR_CERT
#define KEEP_PEER_CERT
#define HAVE_CRL_IO
#define HAVE_IO_TIMEOUT
#define TFM_NO_ASM
#define WOLFSSL_NO_ASM
#define SIZEOF_LONG_LONG 8
#define WOLFSSL_USER_IO
#define NO_WRITEV
#define MICROCHIP_TCPIP
#include "osal/osal.h"
#define XMALLOC_OVERRIDE
#define XMALLOC(s, h, type)  OSAL_Malloc((s))
#define XFREE(p, h, type)    OSAL_Free((p))
#define WOLFSSL_DTLS
#define NO_PWDBASED
#define NO_ERROR_STRINGS
#define NO_OLD_TLS


/*** TCP Configuration ***/
#define TCPIP_TCP_MAX_SEG_SIZE_TX		        	1460
#define TCPIP_TCP_SOCKET_DEFAULT_TX_SIZE			512
#define TCPIP_TCP_SOCKET_DEFAULT_RX_SIZE			512
#define TCPIP_TCP_DYNAMIC_OPTIONS             			true
#define TCPIP_TCP_START_TIMEOUT_VAL		        	1000
#define TCPIP_TCP_DELAYED_ACK_TIMEOUT		    		100
#define TCPIP_TCP_FIN_WAIT_2_TIMEOUT		    		5000
#define TCPIP_TCP_KEEP_ALIVE_TIMEOUT		    		10000
#define TCPIP_TCP_CLOSE_WAIT_TIMEOUT		    		0
#define TCPIP_TCP_MAX_RETRIES		            		5
#define TCPIP_TCP_MAX_UNACKED_KEEP_ALIVES			6
#define TCPIP_TCP_MAX_SYN_RETRIES		        	3
#define TCPIP_TCP_AUTO_TRANSMIT_TIMEOUT_VAL			40
#define TCPIP_TCP_WINDOW_UPDATE_TIMEOUT_VAL			200
#define TCPIP_TCP_MAX_SOCKETS		                10
#define TCPIP_TCP_TASK_TICK_RATE		        	5
#define TCPIP_TCP_MSL_TIMEOUT		        	    0
#define TCPIP_TCP_QUIET_TIME		        	    0
#define TCPIP_TCP_COMMANDS   true
#define TCPIP_TCP_EXTERN_PACKET_PROCESS   false
#define TCPIP_TCP_DISABLE_CRYPTO_USAGE		        	    false



#define TCPIP_STACK_USE_ZEROCONF_LINK_LOCAL
#define TCPIP_ZC_LL_PROBE_WAIT 1
#define TCPIP_ZC_LL_PROBE_MIN 1
#define TCPIP_ZC_LL_PROBE_MAX 2
#define TCPIP_ZC_LL_PROBE_NUM 3
#define TCPIP_ZC_LL_ANNOUNCE_WAIT 2
#define TCPIP_ZC_LL_ANNOUNCE_NUM 2
#define TCPIP_ZC_LL_ANNOUNCE_INTERVAL 2
#define TCPIP_ZC_LL_MAX_CONFLICTS 10
#define TCPIP_ZC_LL_RATE_LIMIT_INTERVAL 60
#define TCPIP_ZC_LL_DEFEND_INTERVAL 10
#define TCPIP_ZC_LL_IPV4_LLBASE 0xa9fe0100
#define TCPIP_ZC_LL_IPV4_LLBASE_MASK 0xffff
#define TCPIP_ZC_LL_TASK_TICK_RATE 113


/*** ARP Configuration ***/
#define TCPIP_ARP_CACHE_ENTRIES                 		5
#define TCPIP_ARP_CACHE_DELETE_OLD		        	true
#define TCPIP_ARP_CACHE_SOLVED_ENTRY_TMO			1200
#define TCPIP_ARP_CACHE_PENDING_ENTRY_TMO			60
#define TCPIP_ARP_CACHE_PENDING_RETRY_TMO			2
#define TCPIP_ARP_CACHE_PERMANENT_QUOTA		    		50
#define TCPIP_ARP_CACHE_PURGE_THRESHOLD		    		75
#define TCPIP_ARP_CACHE_PURGE_QUANTA		    		1
#define TCPIP_ARP_CACHE_ENTRY_RETRIES		    		3
#define TCPIP_ARP_GRATUITOUS_PROBE_COUNT			1
#define TCPIP_ARP_TASK_PROCESS_RATE		        	2000
#define TCPIP_ARP_PRIMARY_CACHE_ONLY		        	true
#define TCPIP_ARP_COMMANDS true



#define TCPIP_IPV6_NDP_MAX_RTR_SOLICITATION_DELAY 	1
#define TCPIP_IPV6_NDP_RTR_SOLICITATION_INTERVAL 	4
#define TCPIP_IPV6_NDP_MAX_RTR_SOLICITATIONS 		3
#define TCPIP_IPV6_NDP_MAX_MULTICAST_SOLICIT 		3
#define TCPIP_IPV6_NDP_MAX_UNICAST_SOLICIT 			3
#define TCPIP_IPV6_NDP_MAX_ANYCAST_DELAY_TIME 		1
#define TCPIP_IPV6_NDP_MAX_NEIGHBOR_ADVERTISEMENT 	3
#define TCPIP_IPV6_NDP_REACHABLE_TIME 				30
#define TCPIP_IPV6_NDP_RETRANS_TIMER 				1
#define TCPIP_IPV6_NDP_DELAY_FIRST_PROBE_TIME 		5
#define TCPIP_IPV6_NDP_VALID_LIFETIME_TWO_HOURS 	(60 * 60 * 2)
#define TCPIP_IPV6_MTU_INCREASE_TIMEOUT 			600
#define TCPIP_IPV6_NDP_TASK_TIMER_RATE 				32


/* Network Configuration Index 0 */
#define TCPIP_NETWORK_DEFAULT_INTERFACE_NAME_IDX0 "ETH"

#define TCPIP_NETWORK_DEFAULT_HOST_NAME_IDX0              "MCHPBOARD_ETH"
#define TCPIP_NETWORK_DEFAULT_MAC_ADDR_IDX0               "00:04:25:1C:A0:02"

#define TCPIP_NETWORK_DEFAULT_IP_ADDRESS_IDX0         "192.168.100.11"
#define TCPIP_NETWORK_DEFAULT_IP_MASK_IDX0            "255.255.255.0"
#define TCPIP_NETWORK_DEFAULT_GATEWAY_IDX0            "192.168.100.1"
#define TCPIP_NETWORK_DEFAULT_DNS_IDX0                "192.168.100.1"
#define TCPIP_NETWORK_DEFAULT_SECOND_DNS_IDX0         "0.0.0.0"
#define TCPIP_NETWORK_DEFAULT_POWER_MODE_IDX0         "full"
#define TCPIP_NETWORK_DEFAULT_INTERFACE_FLAGS_IDX0            \
                                                    TCPIP_NETWORK_CONFIG_DHCP_CLIENT_ON |\
                                                    TCPIP_NETWORK_CONFIG_DNS_CLIENT_ON |\
                                                    TCPIP_NETWORK_CONFIG_IP_STATIC
                                                    
#define TCPIP_NETWORK_DEFAULT_MAC_DRIVER_IDX0         DRV_GMAC_Object




/*** IPv6 Configuration ***/
#define TCPIP_IPV6_DEFAULT_ALLOCATION_BLOCK_SIZE 		64
#define TCPIP_IPV6_MINIMUM_LINK_MTU 					1280
#define TCPIP_IPV6_DEFAULT_LINK_MTU 					1500
#define TCPIP_IPV6_DEFAULT_CUR_HOP_LIMIT 				64
#define TCPIP_IPV6_DEFAULT_BASE_REACHABLE_TIME 			30
#define TCPIP_IPV6_DEFAULT_RETRANSMIT_TIME 				1000
#define TCPIP_IPV6_QUEUE_NEIGHBOR_PACKET_LIMIT 			1
#define TCPIP_IPV6_NEIGHBOR_CACHE_ENTRY_STALE_TIMEOUT 	600
#define TCPIP_IPV6_QUEUE_MCAST_PACKET_LIMIT 			4
#define TCPIP_IPV6_QUEUED_MCAST_PACKET_TIMEOUT 			10
#define TCPIP_IPV6_TASK_PROCESS_RATE 					1000
#define TCPIP_IPV6_INIT_TASK_PROCESS_RATE 				32
#define TCPIP_IPV6_ULA_GENERATE_ENABLE 					false
#define TCPIP_IPV6_ULA_NTP_ACCESS_TMO 					12000
#define TCPIP_IPV6_ULA_NTP_VALID_WINDOW 				1000
#define TCPIP_IPV6_FRAGMENT_PKT_TIMEOUT 				60
#define TCPIP_IPV6_RX_FRAGMENTED_BUFFER_SIZE 			1514
#define TCPIP_IPV6_EXTERN_PACKET_PROCESS   false


#define TCPIP_IPV6_G3_PLC_SUPPORT                       false



/*** telnet Configuration ***/
#define TCPIP_STACK_USE_TELNET_SERVER
#define TCPIP_TELNET_MAX_CONNECTIONS    2
#define TCPIP_TELNET_TASK_TICK_RATE     100
#define TCPIP_TELNET_SKT_TX_BUFF_SIZE   0
#define TCPIP_TELNET_SKT_RX_BUFF_SIZE   0
#define TCPIP_TELNET_LISTEN_PORT        23
#define TCPIP_TELNET_PRINT_BUFF_SIZE    200
#define TCPIP_TELNET_LINE_BUFF_SIZE     80
#define TCPIP_TELNET_USERNAME_SIZE      15
#define TCPIP_TELNET_CONFIG_FLAGS       \
                                       TCPIP_TELNET_FLAG_NONE

#define TCPIP_TELNET_OBSOLETE_AUTHENTICATION false
#define TCPIP_TELNET_AUTHENTICATION_CONN_INFO true



/*** IGMP Configuration ***/
#define TCPIP_STACK_USE_IGMP
#define TCPIP_IGMP_INTERFACES		        	    1
#define TCPIP_IGMP_MCAST_GROUPS		    		    7
#define TCPIP_IGMPV2_SUPPORT_ONLY             		false
#define TCPIP_IGMP_SOURCES_PER_GROUP			    11
#define TCPIP_IGMP_SOCKET_RECORDS_PER_SOURCE		4
#define TCPIP_IGMP_ROBUSTNESS_VARIABLE		        2
#define TCPIP_IGMP_UNSOLICITED_REPORT_INTERVAL		1000
#define TCPIP_IGMP_USER_NOTIFICATION             	false
#define TCPIP_IGMP_TASK_TICK_RATE		    		33


/*** TFTP Server Configuration ***/
#define TCPIP_STACK_USE_TFTP_SERVER
#define TCPIP_TFTPS_TASK_TICK_RATE              		60
#define TCPIP_TFTPS_CMD_PROCESS_TIMEOUT           		10
#define TCPIP_TFTPS_RETRANSMIT_COUNT					3
#define TCPIP_TFTPS_CLIENT_NUMBER                		3
#define TCPIP_TFTPS_DEFAULT_FILESIZE         			64000
#define TCPIP_TFTPS_DEFAULT_BLOCK_SIZE                  512
#define TCPIP_TFTPS_DEFAULT_TIMEOUT                 	10
#define TCPIP_TFTPS_FILENAME_LEN						64
#define TCPIP_TFTPS_CONSOLE_CMD              	false
#define TCPIP_TFTPS_USER_NOTIFICATION					false
#define TCPIP_TFTPS_MOUNT_POINT							"/mnt/mchpSite1/"



/*** FTPC Configuration ***/
#define TCPIP_STACK_USE_FTP_CLIENT
#define TCPIP_FTPC_TASK_TICK_RATE        5
#define TCPIP_FTPC_TMO                   2
#define TCPIP_FTPC_MAX_NUM_CLIENT        3
#define TCPIP_FTPC_DATA_SKT_TX_BUFF_SIZE_DFLT        0
#define TCPIP_FTPC_DATA_SKT_RX_BUFF_SIZE_DFLT        0
#define TCPIP_FTPC_COMMANDS  


/*** iperf Configuration ***/
#define TCPIP_STACK_USE_IPERF
#define TCPIP_IPERF_TX_BUFFER_SIZE		4096
#define TCPIP_IPERF_RX_BUFFER_SIZE  	4096
#define TCPIP_IPERF_TX_WAIT_TMO     	100
#define TCPIP_IPERF_TX_QUEUE_LIMIT  	2
#define TCPIP_IPERF_TIMING_ERROR_MARGIN 0
#define TCPIP_IPERF_MAX_INSTANCES       1
#define TCPIP_IPERF_TX_BW_LIMIT  		1



/*** IPv4 Configuration ***/
#define TCPIP_IPV4_ARP_SLOTS                        10
#define TCPIP_IPV4_EXTERN_PACKET_PROCESS   false

#define TCPIP_IPV4_COMMANDS true

#define TCPIP_IPV4_FORWARDING_ENABLE    false 





/*** SMTPC Configuration ***/
#define TCPIP_STACK_USE_SMTPC
#define TCPIP_SMTPC_MAIL_CONNECTIONS 	            2
#define TCPIP_SMTPC_CLIENT_MESSAGE_DATE 	        "Wed, 20 July 2016 14:55:06 -0600"
#define TCPIP_SMTPC_SERVER_REPLY_TIMEOUT 	        60
#define TCPIP_SMTPC_SERVER_DATA_TIMEOUT 	        60
#define TCPIP_SMTPC_TLS_HANDSHAKE_TIMEOUT 	        10
#define TCPIP_SMTPC_MAIL_RETRIES 	                3
#define TCPIP_SMTPC_SERVER_TRANSIENT_RETRY_TIMEOUT  600
#define TCPIP_SMTPC_INTERNAL_RETRY_TIMEOUT          10
#define TCPIP_SMTPC_SERVER_REPLY_BUFFER_SIZE 	    2048
#define TCPIP_SMTPC_CLIENT_AUTH_BUFFER_SIZE 	    100
#define TCPIP_SMTPC_CLIENT_ADDR_BUFFER_SIZE 	    80
#define TCPIP_SMTPC_PLAIN_LINE_BUFF_SIZE 	        256
#define TCPIP_SMTPC_SKT_TX_BUFF_SIZE			    2048
#define TCPIP_SMTPC_SKT_RX_BUFF_SIZE			    2048
#define TCPIP_SMTPC_TASK_TICK_RATE			        55



/*** announce Configuration ***/
#define TCPIP_STACK_USE_ANNOUNCE
#define TCPIP_ANNOUNCE_MAX_PAYLOAD 	512
#define TCPIP_ANNOUNCE_TASK_RATE    333
#define TCPIP_ANNOUNCE_NETWORK_DIRECTED_BCAST             			false



/*** UDP Configuration ***/
#define TCPIP_UDP_MAX_SOCKETS		                	10
#define TCPIP_UDP_SOCKET_DEFAULT_TX_SIZE		    	512
#define TCPIP_UDP_SOCKET_DEFAULT_TX_QUEUE_LIMIT    	 	3
#define TCPIP_UDP_SOCKET_DEFAULT_RX_QUEUE_LIMIT			3
#define TCPIP_UDP_USE_POOL_BUFFERS   false
#define TCPIP_UDP_USE_TX_CHECKSUM             			true
#define TCPIP_UDP_USE_RX_CHECKSUM             			true
#define TCPIP_UDP_COMMANDS   true
#define TCPIP_UDP_EXTERN_PACKET_PROCESS   false



/*** FTP Configuration ***/
#define TCPIP_STACK_USE_FTP_SERVER
#define TCPIP_FTP_USER_NAME_LEN                 10
#define TCPIP_FTP_MAX_CONNECTIONS               1
#define TCPIP_FTP_DATA_SKT_TX_BUFF_SIZE         0
#define TCPIP_FTP_DATA_SKT_RX_BUFF_SIZE         0
#define TCPIP_FTPS_TASK_TICK_RATE               33
#define TCPIP_FTP_TIMEOUT                       180

#define TCPIP_FTPS_COMMAND_LISTEN_PORT          21
#define TCPIP_FTPS_DATA_LISTEN_PORT             20
#define TCPIP_FTP_MOUNT_POINT                   "/mnt/mchpSite1/"

/***Comment this line out to disable MPFS***/
#define TCPIP_FTP_PUT_ENABLED   

#define TCPIP_FTPS_OBSOLETE_AUTHENTICATION false
#define TCPIP_FTPS_AUTHENTICATION_CONN_INFO true


/* MPLAB Harmony Net Presentation Layer Definitions*/
#define NET_PRES_NUM_INSTANCE 1
#define NET_PRES_NUM_SOCKETS 10

/* Net Pres RTOS Configurations*/
#define NET_PRES_RTOS_STACK_SIZE                8192
#define NET_PRES_RTOS_TASK_PRIORITY             1
	
#define FREERTOS


#define DRV_KSZ9031_PHY_CONFIG_FLAGS       ( 0 \
                                                    | DRV_ETHPHY_CFG_GMII \
                                                    | DRV_ETHPHY_CFG_DEFAULT \
                                                    )
                                                    
#define DRV_KSZ9031_PHY_LINK_INIT_DELAY            500
#define DRV_KSZ9031_PHY_ADDRESS                    3
#define DRV_KSZ9031_PHY_PERIPHERAL_ID              ETH_BASE_ADDRESS
#define DRV_ETHPHY_KSZ9031_NEG_INIT_TMO            1
#define DRV_ETHPHY_KSZ9031_NEG_DONE_TMO            2000
#define DRV_ETHPHY_KSZ9031_RESET_CLR_TMO           500



/*** DHCP Configuration ***/
#define TCPIP_STACK_USE_DHCPV6_CLIENT
#define TCPIP_DHCPV6_CONFIG_STARTUP_FLAG                       		\
																	TCPIP_DHCPV6_FLAG_START_ENABLE |\
																	TCPIP_DHCPV6_FLAG_NONE
																	
#define TCPIP_DHCPV6_MIN_UDP_TX_BUFFER_SIZE                         512
#define TCPIP_DHCPV6_DUID_TYPE_CONFIG								TCPIP_DHCPV6_DUID_TYPE_LL
#define TCPIP_DHCPV6_IANA_DESCRIPTORS_NO							4
#define TCPIP_DHCPV6_IANA_DEFAULT_T1								0
#define TCPIP_DHCPV6_IANA_DEFAULT_T2								0
#define TCPIP_DHCPV6_IANA_SOLICIT_T1								0
#define TCPIP_DHCPV6_IANA_SOLICIT_T2								0
#define TCPIP_DHCPV6_IANA_SOLICIT_ADDRESSES_NO						0
#define TCPIP_DHCPV6_IANA_SOLICIT_DEFAULT_ADDRESS					"::0"
#define TCPIP_DHCPV6_IATA_DESCRIPTORS_NO							2
#define TCPIP_DHCPV6_IATA_DEFAULT_T1								0
#define TCPIP_DHCPV6_IATA_DEFAULT_T2								0
#define TCPIP_DHCPV6_IATA_SOLICIT_ADDRESSES_NO						0
#define TCPIP_DHCPV6_IATA_SOLICIT_DEFAULT_ADDRESS					"::0"
#define TCPIP_DHCPV6_IA_FREE_DESCRIPTORS_NO							2
#define TCPIP_DHCPV6_IA_SOLICIT_ADDRESS_PREF_LTIME					0
#define TCPIP_DHCPV6_IA_SOLICIT_ADDRESS_VALID_LTIME					0

#define TCPIP_DHCPV6_TASK_TICK_RATE                   				100
#define TCPIP_DHCPV6_STATUS_CODE_MESSAGE_LEN                   		0
#define TCPIP_DHCPV6_CLIENT_CONNECT_PORT              				546
#define TCPIP_DHCPV6_SERVER_LISTEN_PORT		            			547
#define TCPIP_DHCPV6_CLIENT_CONSOLE_CMD                				true

#define TCPIP_DHCPV6_FORCED_SERVER_PREFERENCE           			255
#define TCPIP_DHCPV6_MESSAGE_BUFFERS            					8
#define TCPIP_DHCPV6_MESSAGE_BUFFER_SIZE            				512
#define TCPIP_DHCPV6_DNS_SERVERS_NO             					2
#define TCPIP_DHCPV6_DOMAIN_SEARCH_LIST_SIZE						64

#define TCPIP_DHCPV6_USER_NOTIFICATION              				false



/*** DNS Client Configuration ***/
#define TCPIP_STACK_USE_DNS
#define TCPIP_DNS_CLIENT_SERVER_TMO					60
#define TCPIP_DNS_CLIENT_TASK_PROCESS_RATE			200
#define TCPIP_DNS_CLIENT_CACHE_ENTRIES				5
#define TCPIP_DNS_CLIENT_CACHE_ENTRY_TMO			0
#define TCPIP_DNS_CLIENT_CACHE_PER_IPV4_ADDRESS		5
#define TCPIP_DNS_CLIENT_CACHE_PER_IPV6_ADDRESS		1
#define TCPIP_DNS_CLIENT_ADDRESS_TYPE			    IP_ADDRESS_TYPE_IPV4
#define TCPIP_DNS_CLIENT_CACHE_DEFAULT_TTL_VAL		1200
#define TCPIP_DNS_CLIENT_LOOKUP_RETRY_TMO			2
#define TCPIP_DNS_CLIENT_MAX_HOSTNAME_LEN			64
#define TCPIP_DNS_CLIENT_MAX_SELECT_INTERFACES		4
#define TCPIP_DNS_CLIENT_DELETE_OLD_ENTRIES			true
#define TCPIP_DNS_CLIENT_CONSOLE_CMD               	true
#define TCPIP_DNS_CLIENT_USER_NOTIFICATION   false



/*** HTTP NET Configuration ***/
#define TCPIP_STACK_USE_HTTP_NET_SERVER
#define TCPIP_HTTP_NET_MAX_HEADER_LEN		    		15
#define TCPIP_HTTP_NET_CACHE_LEN		        		"600"
#define TCPIP_HTTP_NET_TIMEOUT		            		45
#define TCPIP_HTTP_NET_MAX_CONNECTIONS		    		4
#define TCPIP_HTTP_NET_DEFAULT_FILE		        		"index.htm"
#define TCPIP_HTTP_NET_FILENAME_MAX_LEN			        25
#define TCPIP_HTTP_NET_WEB_DIR		        		    "/mnt/mchpSite1/"
#define TCPIP_HTTP_NET_USE_POST
#define TCPIP_HTTP_NET_USE_COOKIES
#define TCPIP_HTTP_NET_USE_AUTHENTICATION
#define TCPIP_HTTP_NET_MAX_DATA_LEN		        		100
#define TCPIP_HTTP_NET_SKT_TX_BUFF_SIZE		    		1024
#define TCPIP_HTTP_NET_SKT_RX_BUFF_SIZE		    		1024
#define TCPIP_HTTP_NET_LISTEN_PORT		    		    443
#define TCPIP_HTTP_NET_CONFIG_FLAGS                       \
                                                        TCPIP_HTTP_NET_MODULE_FLAG_SECURE_DEFAULT |\
                                                        TCPIP_HTTP_NET_MODULE_FLAG_DEFAULT
#define TCPIP_HTTP_NET_TASK_RATE					    33
#define TCPIP_HTTP_NET_RESPONSE_BUFFER_SIZE				300
#define TCPIP_HTTP_NET_COOKIE_BUFFER_SIZE				200
#define TCPIP_HTTP_NET_FIND_PEEK_BUFF_SIZE				512
#define TCPIP_HTTP_NET_FILE_PROCESS_BUFFER_SIZE         512
#define TCPIP_HTTP_NET_FILE_PROCESS_BUFFERS_NUMBER      4
#define TCPIP_HTTP_NET_FILE_PROCESS_BUFFER_RETRIES      10
#define TCPIP_HTTP_NET_CHUNKS_NUMBER                    10
#define TCPIP_HTTP_NET_CHUNK_RETRIES                    10
#define TCPIP_HTTP_NET_MAX_RECURSE_LEVEL				3
#define TCPIP_HTTP_NET_DYNVAR_PROCESS           		1
#define TCPIP_HTTP_NET_DYNVAR_DESCRIPTORS_NUMBER		10
#define TCPIP_HTTP_NET_DYNVAR_MAX_LEN					50
#define TCPIP_HTTP_NET_DYNVAR_ARG_MAX_NUMBER			4
#define TCPIP_HTTP_NET_DYNVAR_PROCESS_RETRIES			10
#define TCPIP_HTTP_NET_SSI_PROCESS           			1
#define TCPIP_HTTP_NET_SSI_ATTRIBUTES_MAX_NUMBER        4
#define TCPIP_HTTP_NET_SSI_STATIC_ATTTRIB_NUMBER        2
#define TCPIP_HTTP_NET_SSI_CMD_MAX_LEN                  100
#define TCPIP_HTTP_NET_SSI_VARIABLES_NUMBER             13
#define TCPIP_HTTP_NET_SSI_VARIABLE_NAME_MAX_LENGTH     10
#define TCPIP_HTTP_NET_SSI_VARIABLE_STRING_MAX_LENGTH   10
#define TCPIP_HTTP_NET_SSI_ECHO_NOT_FOUND_MESSAGE       "SSI Echo - Not Found: "
#define TCPIP_HTTP_NET_CONNECTION_TIMEOUT          	0
#define TCPIP_HTTP_NET_MALLOC_FUNC                  pvPortMalloc
#define TCPIP_HTTP_NET_FREE_FUNC                    vPortFree
#define TCPIP_HTTP_NET_CONSOLE_CMD           		false



/*** NBNS Configuration ***/
#define TCPIP_STACK_USE_NBNS
#define TCPIP_NBNS_TASK_TICK_RATE   110



/*** DHCP Configuration ***/
#define TCPIP_STACK_USE_DHCP_CLIENT
#define TCPIP_DHCP_TIMEOUT                          10
#define TCPIP_DHCP_TASK_TICK_RATE                   5
#define TCPIP_DHCP_HOST_NAME_SIZE                   20
#define TCPIP_DHCP_CLIENT_CONNECT_PORT              68
#define TCPIP_DHCP_SERVER_LISTEN_PORT               67
#define TCPIP_DHCP_CLIENT_CONSOLE_CMD               true

#define TCPIP_DHCP_USE_OPTION_TIME_SERVER           0
#define TCPIP_DHCP_TIME_SERVER_ADDRESSES            0
#define TCPIP_DHCP_USE_OPTION_NTP_SERVER            0
#define TCPIP_DHCP_NTP_SERVER_ADDRESSES             0
#define TCPIP_DHCP_ARP_LEASE_CHECK_TMO              1000
#define TCPIP_DHCP_WAIT_ARP_FAIL_CHECK_TMO          10



#define TCPIP_STACK_USE_ICMPV6_SERVER


	/*** tcpip_cmd Configuration ***/
	#define TCPIP_STACK_COMMAND_ENABLE



/*** DHCP Server v2 Configuration ***/
#define TCPIP_STACK_USE_DHCP_SERVER_V2
#define TCPIP_DHCPS_MAX_LEASES              32
#define TCPIP_DHCPS_ICMP_PROBES             1
#define TCPIP_DHCPS_CONFLICT_ATTEMPTS       1
#define TCPIP_DHCPS_TASK_PROCESS_RATE       200
#define TCPIP_DHCPS_CLIENT_ID_MAX_SIZE      16
#define TCPIP_DHCPS_ICMP_ECHO_DATA_SIZE     16
#define TCPIP_DHCPS_ICMP_ECHO_RETRIES       2
#define TCPIP_DHCPS_INTERFACE_COUNT    		1

#define TCPIP_DHCPS_OPTION_ROUTER_VALUES        1
#define TCPIP_DHCPS_OPTION_DNS_VALUES           2
#define TCPIP_DHCPS_OPTION_TIME_SERVER_VALUES   1
#define TCPIP_DHCPS_OPTION_NAME_SERVER_VALUES   1
#define TCPIP_DHCPS_OPTION_NTP_SERVER_VALUES    1
#define TCPIP_DHCPS_OPTION_T1_T2_SUPPRESS       false

#define TCPIP_DHCPS_MAX_EVENT_REGISTRATIONS     1
#define TCPIP_DHCPS_REPORT_ERROR_EVENT          true
#define TCPIP_DHCPS_REPORT_CLIENT_EVENT         true
#define TCPIP_DHCPS_ENABLE_STATISTICS           false
#define TCPIP_DHCPS_DYNAMIC_DB_ACCESS           false
#define TCPIP_DHCPS_MULTI_THREADED_ACCESS       false

#define TCPIP_DHCPS_INTERFACE_INDEX_IDX0        0
#define TCPIP_DHCPS_MAX_LEASE_NUM_IDX0          32
#define TCPIP_DHCPS_LEASEDURATION_DFLT_IDX0     28800
#define TCPIP_DHCPS_SERVER_IP_ADDRESS_IDX0      "192.168.1.1"
#define TCPIP_DHCPS_START_IP_ADDR_IDX0          "192.168.1.100"
#define TCPIP_DHCPS_MASK_PREFIX_NUM_IDX0      	24
#define TCPIP_DHCPS_ROUTER_IP_ADDR_IDX0         "192.168.1.1"
#define TCPIP_DHCPS_DNS_IP_ADDR_IDX0            "192.168.1.1"
#define TCPIP_DHCPS_TIMESERVER_IP_ADDR_IDX0     ""
#define TCPIP_DHCPS_NAMESERVER_IP_ADDR_IDX0     ""
#define TCPIP_DHCPS_NTPSERVER_IP_ADDR_IDX0      ""
#define TCPIP_DHCPS_CONFIG_FLAG_IDX0            \
                                                0
        
#define TCPIP_DHCPS_LEASEDURATION_MIN_IDX0      60
#define TCPIP_DHCPS_LEASEDURATION_MAX_IDX0      0
#define TCPIP_DHCPS_UNREQ_TMO_IDX0              0
        
#define TCPIP_DHCPS_T1RENEW_MULT_FACT_IDX0      1
#define TCPIP_DHCPS_T1RENEW_DIV_FACT_IDX0       2
#define TCPIP_DHCPS_T2REBIND_MULT_FACT_IDX0     7
#define TCPIP_DHCPS_T2REBIND_DIV_FACT_IDX0      8
        






/*** Berkeley API Configuration ***/
#define TCPIP_STACK_USE_BERKELEY_API
#define MAX_BSD_SOCKETS 					4
#define TCPIP_STACK_USE_BERKELEY_API


/*** TCPIP Heap Configuration ***/
#define TCPIP_STACK_USE_INTERNAL_HEAP
#define TCPIP_STACK_DRAM_SIZE                       128000
#define TCPIP_STACK_DRAM_RUN_LIMIT                  2048

#define TCPIP_STACK_MALLOC_FUNC                     malloc

#define TCPIP_STACK_CALLOC_FUNC                     calloc

#define TCPIP_STACK_FREE_FUNC                       free



#define TCPIP_STACK_HEAP_USE_FLAGS                   TCPIP_STACK_HEAP_FLAG_ALLOC_UNCACHED

#define TCPIP_STACK_HEAP_USAGE_CONFIG                TCPIP_STACK_HEAP_USE_DEFAULT

#define TCPIP_STACK_SUPPORTED_HEAPS                  1




// *****************************************************************************
// *****************************************************************************
// Section: TCPIP Stack Configuration
// *****************************************************************************
// *****************************************************************************

#define TCPIP_STACK_USE_IPV4
#define TCPIP_STACK_USE_IPV6
#define TCPIP_STACK_USE_TCP
#define TCPIP_STACK_USE_UDP

#define TCPIP_STACK_TICK_RATE		        		5
#define TCPIP_STACK_SECURE_PORT_ENTRIES             10
#define TCPIP_STACK_LINK_RATE		        		333

#define TCPIP_STACK_ALIAS_INTERFACE_SUPPORT   false

#define TCPIP_PACKET_LOG_ENABLE     0

/* TCP/IP stack event notification */
#define TCPIP_STACK_USE_EVENT_NOTIFICATION
#define TCPIP_STACK_USER_NOTIFICATION   false
#define TCPIP_STACK_DOWN_OPERATION   true
#define TCPIP_STACK_IF_UP_DOWN_OPERATION   true
#define TCPIP_STACK_MAC_DOWN_OPERATION  true
#define TCPIP_STACK_INTERFACE_CHANGE_SIGNALING   false
#define TCPIP_STACK_CONFIGURATION_SAVE_RESTORE   true
#define TCPIP_STACK_EXTERN_PACKET_PROCESS   false
#define TCPIP_STACK_RUN_TIME_INIT   false

#define TCPIP_STACK_INTMAC_COUNT           1



/* TCP/IP RTOS Configurations*/
#define TCPIP_RTOS_STACK_SIZE                1024
#define TCPIP_RTOS_PRIORITY             1


/*** ETH Configuration ***/
#define DRV_ETH
#define DRV_PIC32CZ
#define TCPIP_ETH_TX_DESCRIPTORS_COUNT_DUMMY    1
#define TCPIP_ETH_RX_DESCRIPTORS_COUNT_DUMMY    1
#define TCPIP_ETH_RX_BUFF_SIZE_DUMMY            64
#define TCPIP_ETH_TX_BUFF_SIZE_DUMMY            64
/*** QUEUE 0 TX Configuration ***/
#define TCPIP_ETH_TX_DESCRIPTORS_COUNT_QUE0            8
#define TCPIP_ETH_MAX_TX_PKT_SIZE_QUE0                 1536
/*** QUEUE 0 RX Configuration ***/
#define TCPIP_ETH_RX_DESCRIPTORS_COUNT_QUE0            8
#define TCPIP_ETH_RX_BUFF_SIZE_QUE0                    1536
#define TCPIP_ETH_RX_DEDICATED_BUFFERS_QUE0            8
#define TCPIP_ETH_RX_ADDL_BUFF_COUNT_QUE0              2
#define TCPIP_ETH_RX_BUFF_COUNT_THRESHOLD_QUE0         1
#define TCPIP_ETH_RX_BUFF_ALLOC_COUNT_QUE0             2
/*** QUEUE 1 Not Enabled - Dummy Configuration ***/
#define TCPIP_ETH_TX_DESCRIPTORS_COUNT_QUE1             TCPIP_ETH_TX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_ETH_MAX_TX_PKT_SIZE_QUE1                  0
#define TCPIP_ETH_RX_DESCRIPTORS_COUNT_QUE1             TCPIP_ETH_RX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_ETH_RX_BUFF_SIZE_QUE1                     TCPIP_ETH_RX_BUFF_SIZE_DUMMY
#define TCPIP_ETH_RX_DEDICATED_BUFFERS_QUE1             1
#define TCPIP_ETH_RX_ADDL_BUFF_COUNT_QUE1               0
#define TCPIP_ETH_RX_BUFF_COUNT_THRESHOLD_QUE1          0
#define TCPIP_ETH_RX_BUFF_ALLOC_COUNT_QUE1              0
/*** QUEUE 2 Not Enabled - Dummy Configuration ***/
#define TCPIP_ETH_TX_DESCRIPTORS_COUNT_QUE2             TCPIP_ETH_TX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_ETH_MAX_TX_PKT_SIZE_QUE2                  0
#define TCPIP_ETH_RX_DESCRIPTORS_COUNT_QUE2             TCPIP_ETH_RX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_ETH_RX_BUFF_SIZE_QUE2                     TCPIP_ETH_RX_BUFF_SIZE_DUMMY
#define TCPIP_ETH_RX_DEDICATED_BUFFERS_QUE2             1
#define TCPIP_ETH_RX_ADDL_BUFF_COUNT_QUE2               0
#define TCPIP_ETH_RX_BUFF_COUNT_THRESHOLD_QUE2          0
#define TCPIP_ETH_RX_BUFF_ALLOC_COUNT_QUE2              0
/*** QUEUE 3 Not Enabled - Dummy Configuration ***/
#define TCPIP_ETH_TX_DESCRIPTORS_COUNT_QUE3             TCPIP_ETH_TX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_ETH_MAX_TX_PKT_SIZE_QUE3                  0
#define TCPIP_ETH_RX_DESCRIPTORS_COUNT_QUE3             TCPIP_ETH_RX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_ETH_RX_BUFF_SIZE_QUE3                     TCPIP_ETH_RX_BUFF_SIZE_DUMMY
#define TCPIP_ETH_RX_DEDICATED_BUFFERS_QUE3             1
#define TCPIP_ETH_RX_ADDL_BUFF_COUNT_QUE3               0
#define TCPIP_ETH_RX_BUFF_COUNT_THRESHOLD_QUE3          0
#define TCPIP_ETH_RX_BUFF_ALLOC_COUNT_QUE3              0
/*** QUEUE 4 Not Enabled - Dummy Configuration ***/
#define TCPIP_ETH_TX_DESCRIPTORS_COUNT_QUE4             TCPIP_ETH_TX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_ETH_MAX_TX_PKT_SIZE_QUE4                  0
#define TCPIP_ETH_RX_DESCRIPTORS_COUNT_QUE4             TCPIP_ETH_RX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_ETH_RX_BUFF_SIZE_QUE4                     TCPIP_ETH_RX_BUFF_SIZE_DUMMY
#define TCPIP_ETH_RX_DEDICATED_BUFFERS_QUE4             1
#define TCPIP_ETH_RX_ADDL_BUFF_COUNT_QUE4               0
#define TCPIP_ETH_RX_BUFF_COUNT_THRESHOLD_QUE4          0
#define TCPIP_ETH_RX_BUFF_ALLOC_COUNT_QUE4              0
/*** QUEUE 5 Not Enabled - Dummy Configuration ***/
#define TCPIP_ETH_TX_DESCRIPTORS_COUNT_QUE5             TCPIP_ETH_TX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_ETH_MAX_TX_PKT_SIZE_QUE5                  0
#define TCPIP_ETH_RX_DESCRIPTORS_COUNT_QUE5             TCPIP_ETH_RX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_ETH_RX_BUFF_SIZE_QUE5                     TCPIP_ETH_RX_BUFF_SIZE_DUMMY
#define TCPIP_ETH_RX_DEDICATED_BUFFERS_QUE5             1
#define TCPIP_ETH_RX_ADDL_BUFF_COUNT_QUE5               0
#define TCPIP_ETH_RX_BUFF_COUNT_THRESHOLD_QUE5          0
#define TCPIP_ETH_RX_BUFF_ALLOC_COUNT_QUE5              0
#define TCPIP_ETH_RX_FILTERS                       \
                                                        TCPIP_MAC_RX_FILTER_TYPE_BCAST_ACCEPT |\
                                                        TCPIP_MAC_RX_FILTER_TYPE_MCAST_ACCEPT |\
                                                        TCPIP_MAC_RX_FILTER_TYPE_UCAST_ACCEPT |\
                                                        TCPIP_MAC_RX_FILTER_TYPE_CRC_ERROR_REJECT |\
                                                          0
       
#define TCPIP_ETH_SCREEN1_COUNT_QUE        0 
#define TCPIP_ETH_SCREEN2_COUNT_QUE        0       

#define TCPIP_ETH_ETH_OPEN_FLAGS                   \
                                                        TCPIP_ETH_OPEN_AUTO |\
                                                        TCPIP_ETH_OPEN_FDUPLEX |\
                                                        TCPIP_ETH_OPEN_HDUPLEX |\
                                                        TCPIP_ETH_OPEN_1000 |\
                                                        TCPIP_ETH_OPEN_100 |\
                                                        TCPIP_ETH_OPEN_10 |\
                                                        TCPIP_ETH_OPEN_MDIX_AUTO |\
                                                        TCPIP_ETH_OPEN_GMII |\
                                                        0

#define TCPIP_ETH_MODULE_ID                       ETH_BASE_ADDRESS

#define TCPIP_INTMAC_PERIPHERAL_CLK                 (300000000/0x02)           

#define DRV_ETH_RX_CHKSM_OFFLOAD               (TCPIP_MAC_CHECKSUM_NONE)           
#define DRV_ETH_TX_CHKSM_OFFLOAD               (TCPIP_MAC_CHECKSUM_NONE)       
#define TCPIP_ETH_TX_PRIO_COUNT                1
#define TCPIP_ETH_RX_PRIO_COUNT                1
#define DRV_ETH_NUMBER_OF_QUEUES               6
#define DRV_ETH_RMII_MODE                      0

#define DRV_ETH_DESCRIPTOR_ADDRESS                0x2009f000



/*** SNTP Configuration ***/
#define TCPIP_STACK_USE_SNTP_CLIENT
#define TCPIP_NTP_DEFAULT_IF		        	"ETH"
#define TCPIP_NTP_VERSION             			4
#define TCPIP_NTP_DEFAULT_CONNECTION_TYPE   	IP_ADDRESS_TYPE_IPV4
#define TCPIP_NTP_EPOCH		                	2208988800ul
#define TCPIP_NTP_REPLY_TIMEOUT		        	6
#define TCPIP_NTP_MAX_STRATUM		        	15
#define TCPIP_NTP_TIME_STAMP_TMO				660
#define TCPIP_NTP_SERVER		        		"pool.ntp.org"
#define TCPIP_NTP_SERVER_MAX_LENGTH				30
#define TCPIP_NTP_QUERY_INTERVAL				600
#define TCPIP_NTP_FAST_QUERY_INTERVAL	    	14
#define TCPIP_NTP_TASK_TICK_RATE				1100
#define TCPIP_NTP_RX_QUEUE_LIMIT				2



/*** TFTP Client Configuration ***/
#define TCPIP_STACK_USE_TFTP_CLIENT
#define TCPIP_TFTPC_DEFAULT_IF                  "ETH"
#define TCPIP_TFTPC_SERVERADDRESS_LEN           40
#define TCPIP_TFTPC_FILENAME_LEN                32
#define TCPIP_TFTPC_CONSOLE_CMD           		false
#define TCPIP_TFTPC_USER_NOTIFICATION   false
#define TCPIP_TFTPC_TASK_TICK_RATE              100
#define TCPIP_TFTPC_CMD_PROCESS_TIMEOUT         3
#define TCPIP_TFTPC_ARP_TIMEOUT                 3
#define TCPIP_TFTPC_MAX_RETRIES                 3




/*** wolfCrypt Library Configuration ***/
#define MICROCHIP_PIC32
#define MICROCHIP_MPLAB_HARMONY
#define MICROCHIP_MPLAB_HARMONY_3
#define HAVE_MCAPI
#define SIZEOF_LONG_LONG 8
#define WOLFSSL_USER_IO
#define NO_WRITEV
#define NO_FILESYSTEM
#define USE_FAST_MATH
#define NO_PWDBASED
#define HAVE_MCAPI
#define WOLF_CRYPTO_CB  // provide call-back support
// ---------- FUNCTIONAL CONFIGURATION START ----------
#define WOLFSSL_AES_SMALL_TABLES
#define NO_MD4
#define WOLFSSL_SHA224
#define WOLFSSL_AES_128
#define WOLFSSL_AES_192
#define WOLFSSL_AES_256
#define WOLFSSL_AES_DIRECT
#define HAVE_AES_DECRYPT
#define HAVE_AES_ECB
#define HAVE_AES_CBC
#define WOLFSSL_AES_COUNTER
#define WOLFSSL_AES_OFB
#define HAVE_AESGCM
#define HAVE_AESCCM
#define NO_RC4
#define NO_HC128
#define NO_RABBIT
#define HAVE_ECC
#define NO_DH
#define NO_DSA
#define FP_MAX_BITS 4096
#define USE_CERT_BUFFERS_2048
#define NO_DEV_RANDOM
#define HAVE_HASHDRBG
#define WC_NO_HARDEN
#define FREERTOS
#define NO_SIG_WRAPPER
#define NO_ERROR_STRINGS
#define NO_WOLFSSL_MEMORY
// ---------- FUNCTIONAL CONFIGURATION END ----------

#define TCPIP_STACK_NETWORK_INTERAFCE_COUNT  	1







// *****************************************************************************
// *****************************************************************************
// Section: Application Configuration
// *****************************************************************************
// *****************************************************************************


//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // CONFIGURATION_H
/*******************************************************************************
 End of File
*/
