//#include <string.h>
//#include <stdio.h> 
#include "libft.h"
size_t ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

/*  int	main()
{
	printf("%ld", ft_strlen(".Uzumaki !Naruto"));
	printf("\n");
	printf("%ld", strlen(".Uzumaki !Naruto"));
	return (0);
} */