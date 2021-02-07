#include "get_next_line.h"

char	*ft_strdup(char *str)
{
	size_t	len;
	char	*dest;

	dest = (char *)malloc(ft_strlen(str) + 1);
	if (dest == NULL)
		return (NULL);
	len = 0;
	while (str[len])
	{
		dest[len] = str[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
