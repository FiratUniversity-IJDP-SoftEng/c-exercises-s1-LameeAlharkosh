#include <stdio.h>
#include <cs50.h>
int main(void){
  printf("try to guess a number between 1 and 5");
  int num = get_int("enter the secret number:");
if(num == 3){printf("true,\n");}
else{printf("false,\n");}
}

