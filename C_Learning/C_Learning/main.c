//
//  main.c
//  C_Learning
//
//  Created by Dreams on 2018-04-02.
//  Copyright © 2018 Dreams. All rights reserved.
//

#include <stdio.h>
#include "basic_function.h"

static union {
    char c[4]; unsigned long mylong;
}endian_test = {{ 'l', '?', '?', 'b' } };
#define ENDIANNESS ((char)endian_test.mylong)

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%c\n", ENDIANNESS);
    return 0;
}
