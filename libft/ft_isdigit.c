/* #include <ctype.h>
#include <stdio.h> */
#include "libft.h"

int	ft_isdigit(int	c)
{
	if ((c >= '0' && c <= '9'))
		return (2048);
	else
		return (0);
}

/* int	main()
{
	printf("%d", ft_isdigit('a'));
	printf("\n");
	printf("%d", isdigit('a'));
	return (0);
} */

//verificar se preciso que o resultado seja 2048 ou nao