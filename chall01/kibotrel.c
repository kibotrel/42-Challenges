#include <stdlib.h>

char	*ft_rgb2hex(int r, int g, int b)
{
	char	*hex;
	int     color = r;
	char    *charset = "0123456789abcdef";
	
	if (!(hex = malloc(sizeof(char) * 8)))
		return (NULL);
	hex[0] = '#';
	for (int i = 1; i < 7;)
	{
	    hex[i++] = charset[color / 16];
	    hex[i++] = charset[color % 16];
	    color = (i == 3 ? g : b);
	}
	hex[7] = '\0';
	return (hex);
}
