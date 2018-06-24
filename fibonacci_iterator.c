/* 用迭代寫 費氏數列 */
#include <stdio.h>
#include <stdlib.h>

/*
Fibonacci
f1	f2
0	1
1	2
3	5
8	13
21	34

f1+f2=f3
*/

int main(int argc, char *argv[])
{
	int f1=0, f2=1;
	int input=40;

	for (int i = 1; i < input/2; ++i)
	{
		f1 = f1+f2;
		f2 = f2+f1;
	}

	if (input %2 ==1)
	{
		printf("%d\n", f1);
	}
	else
	{
		printf("%d\n", f2);
	}


	return 0;
}