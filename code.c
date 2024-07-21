#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int n;
	do
	{
		printf("How many processes do you want to create : ");
		scanf("%d", &n);
	} while (n <= 0);
	int pid = fork();
	int i = 1;
	while (pid == 0 && i <= n)
	{
		printf("pid %d\n", getpid());
		pid = fork();
		i++;
	}
	exit(0);
}
