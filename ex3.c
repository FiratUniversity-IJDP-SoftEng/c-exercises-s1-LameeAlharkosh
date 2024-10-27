#include <stdio.h>
#include <cs50.h>
#include <strings.h>
int main(void){
    string pet = get_string("What pet do you have?\n");
    if(strcasecmp(pet,"dog") ==0){
        printf("woof woof...\n");
    }
    else if(strcasecmp(pet,"duck") ==0){
        printf("quack quack...\n");
    }
    else if(strcasecmp(pet,"cat") ==0){
        printf("meow meow...\n");
    }
    else if(strcasecmp(pet,"horse") ==0){
        printf("neigh neigh...\n");
    }
    else{
        printf("I don't know that animal sound\n");
    }
}

