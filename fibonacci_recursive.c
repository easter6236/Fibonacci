/* 用遞迴寫 費氏數列 */
#include <stdio.h>
#include <stdlib.h>

/*
Fibonacci
f1	f2
1	1
2	3
5	8
13	21
34	55

f1+f2=f3
*/
int Fibonacci(int input);

int main(int argc, char *argv[])
{
	
	int answer=0;
	answer = Fibonacci(40);
	printf("%d\n", answer);
	return 0;
}

int Fibonacci(int input)
{
	if (input==1)
	{
		return 0;
	}
	else if (input ==2)
	{
		return 1;
	}
	else
	{
		return Fibonacci(input-2)+Fibonacci(input-1);
	}
}