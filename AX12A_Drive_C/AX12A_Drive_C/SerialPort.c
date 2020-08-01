//
//  SerialPort.c
//  AX12A_Drive_C
//
//  Created by 西北偏北 on 2020/8/1.
//  Copyright © 2020 西北偏北. All rights reserved.
//

#include "SerialPort.h"

unsigned char nByteToBeRead;                   // Used to check when Rx packet is complete
unsigned char Data[7];


// Read data from buffer
unsigned char * readSeril()
{
//  if (!isListening())
//    return -1;
//
//  // Empty buffer?
//  if (_receive_buffer_head == _receive_buffer_tail)
//    return -1;
//
//  // Read from "head"
//  int d = _receive_buffer[_receive_buffer_head]; // grab next byte
//  _receive_buffer_head = (_receive_buffer_head + 1) % _SS_MAX_RX_BUFF;
    printf("num: %d\n",nByteToBeRead);
    
  return Data;
}


int available()
{
  return 1;
}

unsigned char writeSeril(const unsigned char *buffer, /*size_t*/ int size)
{

    printf("size:%d       ",size);
    
    for (int i=0; i<size; i++) {
        printf("%02x ",buffer[i]);
    }
    printf("\n");
  return size;
}


//读写标志位
bool downDirectionPort()
{
    printf("DirectionPort is down!\n");
    return 1;
}
bool upDirectionPort()
{
    printf("DirectionPort is up!\n");
    return 1;
}
  
//初始化接收数据
  void init_Data(unsigned char * data)
{
    for (int i = 0; i<7; i++) {
        Data[0] = data[i];
    }
}

//设置应该读取的字节数
void setnByteToBeRead(unsigned char a)
{
    nByteToBeRead = a;
}


