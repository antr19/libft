#include <string.h>

void *ft_memset(void *s, int c, size_t n){
	size_t i;

	i = -1;
	while (++i < n)
		((char *)s)[i] = (char)c;
	return(s);
}