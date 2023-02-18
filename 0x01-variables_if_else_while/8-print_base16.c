#include <stdlib.h>
#include <stdio.h>
/* Write a program that  prints all the numbers of base 16 in lowercase */

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
/*while loop */
int x = '0';
while (x <= '9')
{
putchar(x);
x++;
}
/* for loop */
for (x = 'a'; x <= 'f'; x++)
putchar(x);
putchar('\n');
return (0);
}
