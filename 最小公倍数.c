#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c=0;
	int t=0;
	scanf("%d %d",&a,&b);
	t=a*b;
		if(a<b)
		{
		c=a;
		a=b;
		b=c;      //辗转相除法
		}
	while(c=a%b)
	{
		a=b;
		b=c;
	}
	printf("%d\n",t/b);
	return 0;
}



//#include <stdio.h>
//int main()
//{
//	int a=0;
//	int b=0;
//	int i=0;
//	scanf("%d %d",&a,&b);
//	for(i=1;;i++)         
//	{
//		if(a*i%b==0)                 第二种方法
//			break;
//	}
//	printf("%d\n",a*i);
//	return 0;
//}




#include <stdio.h>
//int main()
//{
//	int a=0;
//	int b=0;
//	int m=0;
//	scanf("%d %d",&a,&b);
//	m=a>b?a:b;
//	while(m%a!=0||m%b!=0)      //第三种方法
//	{
//		m++;
//	}
//	printf("%d\n",m);
//	return 0;
//}












