#include<stdio.h>
int main()
{
	int i,j,k,n,a;
	printf("��������Ҫ�ĳ˷������ߴ���(������9):");
	scanf("%d",&a);
	if(a<1||a>9) printf("��˵�˲��У��˷ѵ���ʱ���ǰɣ�\n");
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
