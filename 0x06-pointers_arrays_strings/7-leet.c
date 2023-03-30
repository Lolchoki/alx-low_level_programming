#include "main.h"
/**
 * *leet - leet oncoding
 *@str: string to be encoded
 *Return: str
 */
char *leet(char *str)
{
	int i;
	int g;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (g = 0 ; a[g] != '\0' ; g++)
		{
			if (str[i] == a[g])
				str[i] = b[g];
		}
	}
	return (str);
}
