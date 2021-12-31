// gcc ret2text.c -no-pie -fno-stack-protector -o ret2text 
 
#include <stdio.h>
#include <stdlib.h>

void u_cant_call_me(){
    printf("Coooool!!!!\n");
}

int main(){
    printf("Hello World!!\n");
    char buf[10];
    scanf("%s",buf);
    return 0;
}