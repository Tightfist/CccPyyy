#仅难度A
#include "stdafx.h"

int sum1(int n)
{   int sum=0;
	for(int i=1;i<n;i++)
	{
		sum=sum+i;
	}
	return sum;
}

void main()
{ 
	printf("%d ",sum1(100));
}
