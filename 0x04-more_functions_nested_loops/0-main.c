#include "main.h"
#include <stdio.h>
/**
 * main - main program function
 * Return: Always returns 0
 */
int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
