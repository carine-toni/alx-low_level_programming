#include<stdio.h>
#include"main.h"
/**
 * print_sign - writes the character c to stdout
 * @n: The character to print
 *
 * Return:1 if n is greater than zero, 0 if n is zero, and -1 if n is le
 * than zero.
 */
int print_sign(int n)
{
char sign;
if (n > 0)
{
sign = '+';
_putchar(sign);
return (1);
}
else if (n == 0)
{
sign = '0';
_putchar(sign);
return (0);
}
else if (n > 0)
{
sign = '+';
putchar(sign);
return (1);
}
else
{
sign = '-';
_putchar(sign);
return (-1);
}
}
