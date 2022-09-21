#include "main.h"
#include <string.h>
/**
 * _strncat -> concatenates specified values from src to dest
 * @src: second string to copy from
 * @dest: string to be overwritten
 * @n: 3rd param
 * Description: concatenates n number of values from src to end of dest
 * Return: string
 **/

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
	return (dest);
}
