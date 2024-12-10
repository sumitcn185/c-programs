#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	printf("enter any number=\n");
	scanf("%d",&n);
	do
	{
		printf("%d*%d=%d\n",n,i,(n*i));
		i++;
	}
	while(i<=10);
	getch();
}
