#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n, t;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
for (t = 'a'; t <= 'f'; t++)
{
putchar(t);
}
putchar('\n');
return (0);
}
