#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j;
	int pt[10],gp[10];
	char p[10][5],temp[5],temp1;	
	printf("Enter the details of 10 students who went to the event:\n");
	for(i=0;i<10;i++)
	{
		printf("enter students %d name:",i+1);
  		scanf("%s",&p[i]);
		printf("enter process time for purchasing gifts:");
		scanf("%d",&pt[i]);
		printf("enter no of gifts purchased:");
		scanf("%d",&gp[i]);
	}
  	for(i=0;i<10-1;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(pt[i]>pt[j])
			{
				temp1=pt[i];
				pt[i]=pt[j];
				pt[j]=temp1;
				temp1=gp[i];
				gp[i]=gp[j];
				gp[j]=temp1;
				strcpy(temp,p[i]);
				strcpy(p[i],p[j]);
				strcpy(p[j],temp);
			}
		}
	}
	
	printf("---Order in which students arrive at billing counter---\n");
	printf("S_name\t P_time\t No.Gifts\n");
	for(i=0;i<10;i++)
	{
	   printf(" %s\t %d\t %d\t \n" ,p[i],pt[i],gp[i]);
	}
	
	for(i=0;i<10-1;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(gp[i]>gp[j])
			{
				temp1=gp[i];
				gp[i]=gp[j];
				gp[j]=temp1;
				temp1=pt[i];
				pt[i]=pt[j];
				pt[j]=temp1;
				strcpy(temp,p[i]);
				strcpy(p[i],p[j]);
				strcpy(p[j],temp);
			}
		}
	}
	
	printf("\n---Order in which accountant billed the students---\n");
	printf("S_name\t P_time\t No.Gifts\n");
	for(i=0;i<10;i++)
	{
	   printf(" %s\t %d\t %d\t \n" ,p[i],pt[i],gp[i]);
	}
	getch();
}
