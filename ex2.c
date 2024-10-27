#include <stdio.h>
#include <cs50.h>
int main(void){
    int num = get_int("Enter your age please:");
    int i = 0;
    while( i < 3 ){
        printf("Happy Birthday!\n");
        i +=1;
    }
}

