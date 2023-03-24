#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - prints if integer is positive, negative or zero
 * @i: the integer to be tested
 */
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else
printf("%d is negative\n", i);
}
/**
 * main - tests the positive_or_negative function
 * Return: 0
 */
int main(void)
{
int i = 0;
positive_or_negative(i);
return (0);
}

