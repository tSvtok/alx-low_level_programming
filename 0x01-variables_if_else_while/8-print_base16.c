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
int a;
char fix;
for (a = '0'; a <= '9'; a++)
putchar(a);
for (fix = 'a'; fix <= 'f'; fix++)
putchar(fix);
putchar('\n');
return (0);
}
