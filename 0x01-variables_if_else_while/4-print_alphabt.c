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
char go, e, q;
e = 'e';
q = 'q';
for (go = 'a'; go <= 'z'; go++)
{
if (go != e && go != q)
putchar(go);
}
printf("\n");
return (0);
}
