/* #include <ctype.h>
#include <stdio.h> */
#include "libft.h"

int ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}

/* int	main()
{
	printf("%d", ft_isascii(0));
	printf("\n");
	printf("%d", __isascii(0));
	return (0);
} */
//checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.