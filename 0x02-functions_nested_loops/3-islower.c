#include "main.h"
/**
*_islower - check if character is lowercase
*@c: character to be verified
*Return: can return 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

return (0);
}
