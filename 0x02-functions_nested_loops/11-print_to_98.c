#include <stdio.h>
#include"main.h"
/**
 * print_to_98 - prints all natural numbers n to 98
 * @n: starting number
 *
 * return: void
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i != n)
{
putchar(',');
putchar(' ');
}
if (i < 0)
{
putchar('-');
i = -i;
}
putchar(i / 10 + '0');
putchar(i % 10 + '0');
}
}
else
{
for (i = n; i >= 98; i--)
{
if (i != n)
{
putchar(',');
putchar(' ');
}
if (i < 0)
{
putchar('-');
i = -i;
}
putchar(i / 10 + '0');
putchar(i % 10 + '0');
}
}
putchar('\n');
}
