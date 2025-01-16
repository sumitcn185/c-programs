#include<studio.h>
#include<conio.h>

struct person
{
	char name[20];
	int age;
	char address[30];
	
	
};

struct employee
{
	int id;
	struct person p;

};

void main()
{
	int i;
	struct employee e[3];
	clrscr();
	
	for(i=0;i<3;i++)
	{
		printf("Enter id: ");
		scanf("%d",&e[i].id);
		printf("Enter Name: ");
		scanf("%s",e[i].p.name);
		printf("Enter Age: ");
		scanf("%d",e[i].p.age);
		printf("Enter Address: ");
		scanf("%s",e[i].p.address);
		
	}
	printf("\n Entered Detalis are: ");
	for(i=0;i<3;i++)
	{
		printf("\n%d")
	}
}

