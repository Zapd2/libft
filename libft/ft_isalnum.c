/* #include <ctype.h>
#include <stdio.h> */
#include "libft.h"

int ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= '0' && c <= '9'))
		return (8);
	else
		return (0);
}

/* int	main()
{
	printf("%d", ft_isalnum('-'));
	printf("\n");
	printf("%d", isalnum('-'));
	return (0);
} */

//checks for an alphanumeric character;
//verificar se preciso ou nao que de um resultado de 8;
