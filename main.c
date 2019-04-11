#include <stdio.h>
#include <stdlib.h>
#include "calculator.c"



int main(int argc, char const *argv[])
{ 
    int x , y;
    printf("Give me x and y\n");
    printf("x: \n");
    scanf("%d",&x);
    printf("y: \n");
    scanf("%d",&y);
    printf("Your result is %d\n",sum(x,y));
    
    return 0;
}
