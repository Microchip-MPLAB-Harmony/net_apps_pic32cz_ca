![Microchip logo](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_logo.png)
![Harmony logo small](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_mplab_harmony_logo_small.png)

# Harmony 3 Net library application examples for PIC32CZ_CA family

MPLAB® Harmony 3 is an extension of the MPLAB® ecosystem for creating embedded firmware solutions for Microchip 32-bit SAM and PIC® microcontroller and microprocessor devices.  Refer to the following links for more information.

- [Microchip 32-bit MCUs](https://www.microchip.com/design-centers/32-bit)
- [Microchip 32-bit MPUs](https://www.microchip.com/design-centers/32-bit-mpus)
- [Microchip MPLAB X IDE](https://www.microchip.com/mplab/mplab-x-ide)
- [Microchip MPLAB® Harmony](https://www.microchip.com/mplab/mplab-harmony)
- [Microchip MPLAB® Harmony Pages](https://microchip-mplab-harmony.github.io/)

This repository contains the MPLAB® Harmony 3 Net library application examples for PIC32CZ_CA family

- [Release Notes](./release_notes.md)
- [MPLAB® Harmony License](mplab_harmony_license.md)

# Contents Summary

| Folder     | Description                                               |
| ---        | ---                                                       |
| apps       | Contains Net library example applications        |
| docs       | Contains documentation in html format for offline viewing (to be used only after cloning this repository onto a local machine). Use [github pages](https://microchip-mplab-harmony.github.io/net_apps_pic32cz_ca/) of this repository for viewing it online. |

## Code Examples

The following applications are provided to demonstrate the typical or interesting usage models of the Net libraries.

| Name | Description |
| ---- | ----------- |
| [berkeley_tcp_client](./docs/GUID-52234511-C57E-4599-B641-7D096BBA9FFA.html) | This example application shows a TCP Client demo using BSD API |
| [berkeley_tcp_server](./docs/GUID-56D36C21-6B8F-4FFD-A38E-99E75C5D9819.html) | This example application shows a TCP Server demo using BSD API |
| [berkeley_udp_client](./docs/GUID-8DBC916F-2115-449C-968F-2CB4E9EF0016.html) | This example application shows a UDP Client demo using BSD API |
| [berkeley_udp_relay](./docs/GUID-02443CB9-7974-4BFE-9B08-94635EE9DE16.html) | This example application shows a UDP Relay demo using BSD API |
| [berkeley_udp_server](./docs/GUID-25652A6E-EAA0-4981-BFA9-3C777C687A95.html) | This example application shows a UDP Server demo using BSD API |
| [iperf_demo](./docs/GUID-70468D4E-B711-46E5-9A64-F6AB3B10DF55.html) | This example application shows running iperf and measuring the network performance |
| [tcpip_client_server](./docs/GUID-A99A5A73-1868-4294-891E-9DEC11A1DF87.html) | This example application shows a multi-threaded example with TCP and UDP server and client threads |
| [tcpip_tcp_client](./docs/GUID-FB13C3E1-A5CA-4577-A6E2-F215D95C879E.html) | This example application shows a TCP Client demo using Harmony native API |
| [tcpip_tcp_client_server](./docs/GUID-441AAAA5-EF89-4590-8529-952A303CCEF9.html) | This example application shows a TCP Client and Server demo using Harmony native API |
| [tcpip_tcp_server](./docs/GUID-73F9A49A-D0E3-4938-A635-A969EB59147D.html) | This example application shows a TCP Server demo using Harmony native API |
| [tcpip_udp_client](./docs/GUID-56B42294-413B-4163-A89C-E5EF1382C697.html) | This example application shows a UDP Client demo using Harmony native API |
| [tcpip_udp_client_server](./docs/GUID-F6DEC2FA-D6FA-4C78-BD52-2BFC6DF161A0.html) | This example application shows a UDP Client and Server demo using Harmony native API|
| [tcpip_udp_server](./docs/GUID-463EACF6-831E-4FB0-BA30-43A24025DF7B.html) | This example application shows a UDP Server demo using Harmony native API |
| [web_ftp_server_mpfs_fatfs](./docs/GUID-7A5C3209-6142-4C2C-BBE9-A0F7423A65A0.html) | This example application shows a HTTP web server using MPFS/NVM and FTP server using FATFS/SDCARD |
| [web_net_server_nvm_mpfs](./docs/GUID-7DBC271D-2C43-4760-B855-B24F6E50A6A1.html) | This example application shows a Web server with MPFS file system using the NVM storage |
| [web_net_server_sdcard_fatfs](./docs/GUID-C59CA61B-86F0-4CB7-A41D-CBE07081B4F0.html) | This example application shows a Web server with FAT FS file system on the external SD card |
| [web_net_super_set_sdcard_fatfs](./docs/GUID-A175E48C-281A-4BD0-A8EE-3A7C72610B0D.html) | This example application shows a All modules built in demo (IPv6, DHCPv6 server, telnet, etc.) running a web server with FAT FS file system on the external SD card |
| [wolfssl_tcp_client](./docs/GUID-D97772AE-022D-42BF-A3DB-BCB8078C8F58.html) | This example application shows a connection to a Web server using TLS to encrypt the connection with wolfSSL |
| [wolfssl_tcp_server](./docs/GUID-0326DABD-FAC5-4016-9683-73AD44255513.html) | This example application shows Web server demo accepting encrypted TLS connections using wolfSSL |
____


[![License](https://img.shields.io/badge/license-Harmony%20license-orange.svg)](https://github.com/Microchip-MPLAB-Harmony/net_apps_pic32cz_ca/blob/master/mplab_harmony_license.md)
[![Latest release](https://img.shields.io/github/release/Microchip-MPLAB-Harmony/net_apps_pic32cz_ca.svg)](https://github.com/Microchip-MPLAB-Harmony/net_apps_pic32cz_ca/releases/latest)
[![Latest release date](https://img.shields.io/github/release-date/Microchip-MPLAB-Harmony/net_apps_pic32cz_ca.svg)](https://github.com/Microchip-MPLAB-Harmony/net_apps_pic32cz_ca/releases/latest)
[![Commit activity](https://img.shields.io/github/commit-activity/y/Microchip-MPLAB-Harmony/net_apps_pic32cz_ca.svg)](https://github.com/Microchip-MPLAB-Harmony/net_apps_pic32cz_ca/graphs/commit-activity)
[![Contributors](https://img.shields.io/github/contributors-anon/Microchip-MPLAB-Harmony/net_apps_pic32cz_ca.svg)]()

____

[![Follow us on Youtube](https://img.shields.io/badge/Youtube-Follow%20us%20on%20Youtube-red.svg)](https://www.youtube.com/user/MicrochipTechnology)
[![Follow us on LinkedIn](https://img.shields.io/badge/LinkedIn-Follow%20us%20on%20LinkedIn-blue.svg)](https://www.linkedin.com/company/microchip-technology)
[![Follow us on Facebook](https://img.shields.io/badge/Facebook-Follow%20us%20on%20Facebook-blue.svg)](https://www.facebook.com/microchiptechnology/)
[![Follow us on Twitter](https://img.shields.io/twitter/follow/MicrochipTech.svg?style=social)](https://twitter.com/MicrochipTech)

[![](https://img.shields.io/github/stars/Microchip-MPLAB-Harmony/net_apps_pic32cz_ca.svg?style=social)]()
[![](https://img.shields.io/github/watchers/Microchip-MPLAB-Harmony/net_apps_pic32cz_ca.svg?style=social)]()


