/* #include <ctype.h>
#include <stdio.h> */
#include "libft.h"

int ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}

/* int	main()
{
	printf("%d", ft_isprint(121));
	printf("\n");
	printf("%d", ft_isprint(121));
	return (0);
} */