#include <stdlib.h>
#include <stdio.h>
/* Write a program that  prints all the numbers of base 16 in lowercase */

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
  /*for loop */
  int x = '0';
    while (x <= '9')
    {
        putchar(x);
        x++;
    }
  for( char j = 'a'; j <= 'f'; j++){
    putchar(j);
  }
  putchar('\n');
	return (0);
}
