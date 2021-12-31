// gcc -fno-stack-protector ex1.c -o ex1
#include <stdio.h>

int main(){
  char password[4];
  int is_admin = 0;
  printf("input password: ");
  scanf("%s",password);
  printf("password = %s\n",password);
  if(is_admin != 0){
    printf("Hello! Administrator!!\n");
  }
  printf("value = %x\n",is_admin);
}
