#include <stdlib.h>
#include <stdio.h>
/* program prints all single digit numbers of base 10 starting from 0 */


/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i = '0';
	/* while loop */
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
