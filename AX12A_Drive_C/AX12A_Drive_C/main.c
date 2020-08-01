//
//  main.c
//  AX12A_Drive_C
//
//  Created by 西北偏北 on 2020/8/1.
//  Copyright © 2020 西北偏北. All rights reserved.
//

#include <stdio.h>
#include "Dynamixel.h"


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    ping(1);
    
    unsigned char Data[7];
    Data[0] = 0xff;
    Data[1] = 0xff;
    Data[2] = 0x01;
    Data[3] = 0x02;
    Data[4] = 0x00;
    Data[5] = 0xfc;
    init_Data(Data);
    printf("%02x",readDxlResult());
    
    return 0;
}
