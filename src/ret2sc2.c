// gcc -no-pie -fno-stack-protector -z execstack ret2sc2.c -o ret2sc2
#include <stdio.h>
#include <string.h>

char name[100];

int main(){
    printf("What's your name : ");
    scanf("%s",name);

    char comment[500];
    printf("What's your comment : ");
    scanf("%s",comment);
    return 0;
}