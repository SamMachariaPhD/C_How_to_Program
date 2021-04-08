// Addition program

#include <stdio.h>

int main(void)
{
    int integer1;
    int integer2;

    printf("Enter first integer\n"); // prompt
    scanf("%d", &integer1); // read the integer input

    printf("Enter second integer\n");
    scanf("%d", &integer2);

    int sum;
    sum = integer1 + integer2; // assign total to sum

    printf("Sum is %d\n", sum);
}

/*
Notes:

> You may place variable definition anywhere in main.
> You should define variables close to their first use.
> C is case sensitive.
> A self-documenting program is more self-explanatory. Requires few comments.
> "f" in scanf or printf stands for "formatted".
> "%d" is a conversion specifier. "%" -- begining of conv specifier, "d" -- decimal integer.
> "&" is the address operator to specify the location for data to be stored.
> "=, +" are binary operators. Place spaces on either side for clarity.
> Place spaces on either side of binary operators but not between equality or relational operators like "==", "<=".
> Variable definition and assignment may be combined: int sum = integer1 + integer2;
> Calculation can be done inside printf: printf("Sum is %d\n", integer1 + integer2);

*/