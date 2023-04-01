#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char fix;
for (fix = 'a'; fix <= 'z'; fix++)
putchar(fix);
for (fix = 'A'; fix <= 'Z'; fix++)
putchar(fix);
putchar('\n');
return (0);
}
