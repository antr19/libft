#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void test_isalpha(){
	printf("test_isalpha\n");
	if (ft_isalpha('a') == 1)
		printf("a+\n");
	else
		printf("a-\n");

	if (ft_isalpha('m') == 1)
		printf("m+\n");
	else
		printf("m-\n");
	
	if (ft_isalpha('z') == 1)
		printf("z+\n");
	else
		printf("z-\n");
	
	if (ft_isalpha('A') == 1)
		printf("A+\n");
	else
		printf("A-\n");
	
	if (ft_isalpha('N') == 1)
		printf("N+\n");
	else
		printf("N-\n");
	
	if (ft_isalpha('Z') == 1)
		printf("Z+\n");
	else
		printf("Z-\n");

	if (ft_isalpha('1') == 0)
		printf("1+\n");
	else
		printf("1-\n");
	
	if (ft_isalpha(' ') == 0)
		printf(" +\n");
	else
		printf(" -\n");
	
	if (ft_isalpha('[') == 0)
		printf("[+\n");
	else
		printf("[-\n");
	
	if (ft_isalpha('{') == 0)
		printf("{+\n");
	else
		printf("{-\n");
	printf("\n");
}

void test_isdigit(){
	printf("test_isdigit\n");
	if (ft_isdigit('1') == 1)
		printf("1+\n");
	else
		printf("1-\n");
	
	if (ft_isdigit('9') == 1)
		printf("9+\n");
	else
		printf("9-\n");
	
	if (ft_isdigit('5') == 1)
		printf("5+\n");
	else
		printf("5-\n");
	
	if (ft_isdigit('a') == 0)
		printf("a+\n");
	else
		printf("a-\n");
	
	if (ft_isdigit('[') == 0)
		printf("[+\n");
	else
		printf("[-\n");

	if (ft_isdigit('{') == 0)
		printf("{+\n");
	else
		printf("{-\n");
	printf("\n");
}

void test_ft_isalnum(){
	printf("test_isalnum\n");
	if (ft_isalpha('a') == 1)
		printf("a+\n");
	else
		printf("a-\n");

	if (ft_isalpha('m') == 1)
		printf("m+\n");
	else
		printf("m-\n");
	
	if (ft_isalpha('z') == 1)
		printf("z+\n");
	else
		printf("z-\n");
	
	if (ft_isalpha('A') == 1)
		printf("A+\n");
	else
		printf("A-\n");
	
	if (ft_isalpha('N') == 1)
		printf("N+\n");
	else
		printf("N-\n");
	
	if (ft_isalpha('Z') == 1)
		printf("Z+\n");
	else
		printf("Z-\n");

	if (ft_isdigit('1') == 1)
		printf("1+\n");
	else
		printf("1-\n");
	
	if (ft_isdigit('9') == 1)
		printf("9+\n");
	else
		printf("9-\n");
	
	if (ft_isalpha(' ') == 0)
		printf(" +\n");
	else
		printf(" -\n");
	
	if (ft_isalpha('[') == 0)
		printf("[+\n");
	else
		printf("[-\n");
	
	if (ft_isalpha('{') == 0)
		printf("{+\n");
	else
		printf("{-\n");
	printf("\n");
}

void test_ft_strlen(){
	printf("test_ft_strlen\n");
	printf("10 %llu", ft_strlen("blabla bla"));
	printf("\n");
}

void test_ft_memset(){
	printf("test_ft_memset\n");
	void *r;

	r = malloc(15);
	printf("%s", (char *)ft_memset(r, (int)'a', 10));
	printf("\n");
}

void test_ft_bzero(){
	printf("test_ft_bzero\n");
	void *r;

	r = malloc(15);
	ft_bzero(r, 10);
	printf("%c_%c_%c_%c_", ((char *)r)[0], ((char *)r)[7], ((char *)r)[9], ((char *)r)[13]);
	printf("\n");
}


void test_ft_memcpy(){
	printf("test_ft_bzero\n");
	void *r;

	r = malloc(15);
	printf("%s", (char *)ft_memcpy(r, "blabla", 8));
	printf("\n");
}

int main(){
	// test_isalpha();
	// test_isdigit();
	// test_ft_isalnum();
	// test_ft_memset();
	// test_ft_bzero();
	test_ft_memcpy();
}