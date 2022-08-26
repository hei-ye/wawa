#include <stdio.h>
int main()
{
	int a=7;
	int b=5;
	int c=1;
	int t=a*b;
	while(c=a%b)
	{
		a=b;
		b=c;
	}
	printf("%d\n",t/b);
	return 0;
}