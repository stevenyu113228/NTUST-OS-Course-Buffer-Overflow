// gcc -no-pie -fno-stack-protector -z execstack ret2sc1.c -o ret2sc1
#include <stdio.h>
#include <string.h>

char tmp[] = "H\xb8/bin/sh\x00PH\x89\xe7H1\xf6H1\xd2H\xc7\xc0;\x00\x00\x00\x0f\x05";
int main(){
    char input[500];
    scanf("%s",input);
    return 0;
}