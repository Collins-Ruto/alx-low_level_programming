#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Function Entry point
 * Return: 0 to show code executed Successfully
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int k = n % 10;
if (k > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, k);
else if (k == 0)
printf("Last digit of %d is %d and is 0\n", n, k);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
return (0);
}
