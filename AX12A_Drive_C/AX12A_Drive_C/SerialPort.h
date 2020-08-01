//
//  SerialPort.h
//  AX12A_Drive_C
//
//  Created by 西北偏北 on 2020/8/1.
//  Copyright © 2020 西北偏北. All rights reserved.
//

#ifndef SerialPort_h
#define SerialPort_h

#include <stdio.h>

#define bool _Bool

unsigned char writeSeril(const unsigned char *buffer, /*size_t*/ int size);
unsigned char * readSeril(void);
int available(void);


//读写标志位
bool downDirectionPort(void);  //接收
bool upDirectionPort(void);   //发送

//初始化接收数据
void init_Data(unsigned char * data);
//设置应该读取的字节数
void setnByteToBeRead(unsigned char a);


#endif /* SerialPort_h */
