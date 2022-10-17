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
  while(alpha <= 'z')
  {
  putchar(alpha);
  putchar('\n');
  alpha++;}
  return (0);
}
