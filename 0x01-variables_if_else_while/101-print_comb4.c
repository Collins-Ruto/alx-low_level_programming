#include <stdio.h>

/**
 * main - Function Entry point
 * Return: 0 to show code executed Successfully
 */

int main(void)
{
for (int i = 0; i < 10; i++)
{
for (int j = 0; j < 10; j++)
{
for (int k = 0; k < 10; k++)
{
if (i < j && j < k)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
}
return (0);
}
