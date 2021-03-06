/*
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef __HDMI_EDID_H_
#define __HDMI_EDID_H_

#define Abort_Current_Operation             0
#define Special_Offset_Address_Read         1
#define Explicit_Offset_Address_Write       2
#define Implicit_Offset_Address_Write       3
#define Explicit_Offset_Address_Read        4
#define Implicit_Offset_Address_Read        5
#define Explicit_Offset_Address_E_DDC_Read  6
#define Implicit_Offset_Address_E_DDC_Read  7

//extern __u8	EDID_Buf[1024];
extern __u8	Device_Support_VIC[512];
extern __s32 ParseEDID(void);
//extern __s32 DDC_Read(char cmd,char pointer,char offset,int nbyte,char * pbuf);
//extern void DDC_Init(void);
//extern void send_ini_sequence(void);
extern __u32 GetIsHdmi(void);
extern __u32 GetIsYUV(void);
extern __s32 GetEdidInfo(void);

#endif //__HDMI_EDID_H_