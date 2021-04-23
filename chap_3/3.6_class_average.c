// calculate a class average

#include <stdio.h>

int main(void)
{
    unsigned int counter;
    int grade;
    int total;
    int average;

    total = 0;
    counter = 1;

    while(counter <= 10)
    {
        printf("%d",counter);
        printf("%s","Enter grade: ");
        scanf("%d", &grade);
        total = total + grade;
        counter += 1;
    }
    average = total/10;
    puts("Class average is ");
    printf("%d",average);
}