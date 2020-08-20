#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
bool chprime[150000];
int main()
{
	int nub = 0;
	int prime[10001];
	for (int i = 2; i < 150000; i++)
	{
		if (!chprime[i])
		{
			prime[nub] = i;
			nub++;
			for (int j = i * 2; j < 150000; j += i)
			{
				chprime[j] = 1;
			}
		}
		if (nub == 10001)break;
	}
	printf("%d ", prime[10000]);
}