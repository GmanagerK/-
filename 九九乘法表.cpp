#include<stdio.h>
int main()
{
	int i,j,k,n,a;
	printf("请输入需要的乘法表的最高次数(不超过9):");
	scanf("%d",&a);
	if(a<1||a>9) printf("都说了不行，浪费电脑时间是吧？\n");
	else
	{
		for(i=1,n=1;i<=a;i++,n++)
		{
			for(j=1;j<=n;j++)
			{
				k=i*j;
			    printf("%d*%d=%d\t",i,j,k);
			}
			printf("\n");
		}	
	}
	return 0;
}
