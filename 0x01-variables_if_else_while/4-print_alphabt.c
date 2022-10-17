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
char alpha;

alpha = 'a';
while (alpha <= 'z')
{
if (alpha == 'q' || alpha == 'e')
{
continue; }
else
{
putchar(alpha);
alpha++; } }
putchar('\n');
return (0);
}
