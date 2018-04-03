//
//  basic_function.c
//  C_Learning
//
//  Created by Dreams on 2018-04-02.
//  Copyright © 2018 Dreams. All rights reserved.
//

#include "basic_function.h"
//#include <stdio.h>

void isBigEndian() // Method 1
{
    short int a = 0x1122;
    char b = *(char *) &a; //b point to the lower byte of a
    if (b == 0x11)
        printf("BigEndian!\n");
    else{
        printf("Little Endian!\n");
    }
            
}



