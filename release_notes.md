![Microchip logo](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_logo.png)
![Harmony logo small](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_mplab_harmony_logo_small.png)

# Microchip MPLAB® Harmony 3 Release Notes

## Harmony 3 Network application examples for PIC32CZ_CA family  v3.9.0

### New Features
New features added in this release are as follows:

- Beta support for the PIC32CZ_CA applications repository
- All applications use MCC for configuration
- All applications use the Net Plugin (beta)

### KNOWN ISSUES

The current known issues are as follows:
* This is a Beta release for the PIC32CZ_CA: the PIC32CZ_CA Curiosity board and DFP: PIC32CZ-CA80_DFP\1.0.17 are not publicly available
    - In the  PIC32CZ-CA80_DFP the field ETH_ISRQ[5] registers of Riverside is currently specified as read-only register.
       It is really a write-to-clear register. 
       eth.h can be corrected manually.
* Console messages will not be displayed on terminal window after programming the TCP/IP demos on PIC32CZ CA80/90 Curiosity Ultra board. 
    - To display the console message, after programming the board, disconnect the
      terminal application and reconnect.
    - Then reset board to restart the demo.
* For running TCP/IP demos, make sure to power the PIC32CZ CA80/90 Curiosity Ultra board from DC jack (6.5v to 14v)
* Freertos based web_net_server_nvm_mpfs demo might not load the webpage when the project is built with XC32 v4.20 toolchain. It works fine when built with XC32 v4.00
* Freertos based web_net_server_sdcard_fatfs demo might not load the webpage when the project is built with XC32 v4.20 toolchain. It works fine when built with XC32 v4.00


### Development Tools

- [MPLAB® X IDE v6.05](https://www.microchip.com/mplab/mplab-x-ide) or later
- [MPLAB® XC32 C/C++ Compiler v4.20](https://www.microchip.com/mplab/compilers) or later
- [Harmony net repository, 3.9.0](https://github.com/Microchip-MPLAB-Harmony/net/tree/v3.9.0)
- [Harmony net_apps_pic32cz_ca demo apps repositories, 3.9.0](https://github.com/Microchip-MPLAB-Harmony/net_apps_pic32cz_ca/tree/v3.9.0)
- MPLAB Code Configurator (MCC), 5.2.1


#### Development Kit Support

This release supports applications for the following development kits

| Development Kits |
| --- |
| PIC32CZ_CA80 Curiosity Ultra Board |


## Net release notes

- See the [Net 3.9.0 Release notes](https://github.com/Microchip-MPLAB-Harmony/net/tree/v3.9.0)

