// Secure C program

#include<stdio.h>

int main(void)
{
    // instead of 
    printf("Welcome to C!\n");
    // use
    puts("Welcome to C!");
    // instead of 
    printf("Welcome ");
    // use 
    printf("%s", "Welcome ");
}