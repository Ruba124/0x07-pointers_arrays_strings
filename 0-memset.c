#include "main.h"
/**
 * _memset - works as c memset
 * @s:string
 * @b:int
 * @n:number
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int c = 0;

	for (c = 0; n > 0; n--)
	{
		s[c] = b;
		c++;
	}
	return (s);
}
