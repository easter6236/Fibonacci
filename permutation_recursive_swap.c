#include <stdio.h>
#include <stdlib.h>

// 用swap()函數輸出一個字串的所有排列組合
//123 213 132 312 231 321
//123 132 213 231 312 321
//不要一次只印一個，直接印%s

void swap(char *a, char *b);
void permutation(char * str, int n);

int main(int argc, char *argv[])
{
	char s[]="123";

	permutation(s, 3);
	
	

	return 0;
}

void permutation(char * str, int n)
{
	char tmp;
	if (n==1)
	{
		printf("%s\n", str);
		return;
	}
	for (int i = 0; i < n; ++i)
	{
		// swap, 依序跟最後一位做swap
		swap((str+i),(str+n-1));
		/*
		tmp = *(str+i);
		*(str+i) = *(str+n-1);
		*(str+n-1) = tmp;
		*/
		permutation(str, (n-1));
		swap((str+i),(str+n-1));
		/*
		tmp = *(str+i);
		*(str+i) = *(str+n-1);
		*(str+n-1) = tmp;
		*/
	}
}

void swap(char *a, char *b)
{
	char tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}