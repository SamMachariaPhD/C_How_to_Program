
#include <stdio.h>

int main(void)
{
    int grade;
    printf("%s","Enter grade: ");
    scanf("%d", &grade);
    puts(grade >= 60 ? "Passed" : "Failed");
}