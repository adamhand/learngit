#include <stdio.h>

int main(void)
{
	int i = 0;
	
	printf("hello world!\n");

	for(; i < 100; i++)
	{
		printf("hahaha:%d\n",i);
	}

	while(i > 0)
	{
		printf("hehehehe:%d\n",i);
		i--;
	}
}
