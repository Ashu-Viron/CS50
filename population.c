#include "cs50.h"
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int star_size;
    do{
             star_size=get_int("Starting population of llamas: ");
    }while(star_size<9);
    // TODO: Prompt for end size
    int end_size;
    do{
         end_size=get_int("Ending population of llama: ");
    }while(end_size<star_size);
    // TODO: Calculate number of years until we reach threshold 
    int i=0;
    do{ 
        int a=star_size/3;
        int b=star_size/4;
    star_size=(star_size+a)-b;
    i++;
    }while(star_size<end_size);
    // TODO: Print number of years
    printf("Years: %i",i);
}
