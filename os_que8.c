#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
 {
   int a,n,i,j;
   int p[20],pp[20],bt[20],tq;
 
   printf("Enter number of process : ");
   scanf("%d",&n);
   printf("Enter time quantum");
   scanf("%d",&tq);
   printf("\n\t Enter burst time : time priorities : Arrival time  \n");
 
   for(i=0;i<n;i++)
    {
      printf("\n Process %d ",i+1);
      scanf("%d %d %d",&bt[i],&pp[i],&at[i]);
	  p[i]=i+1;
    }
 
  for(i=0;i<n-1;i++)
   {
     for(j=i+1;j<n;j++)
     {
       if(pp[i]<pp[j])
       {
     a=pp[i];
     pp[i]=pp[j];
     pp[j]=a;
     a=bt[i];
     bt[i]=bt[j];
     bt[j]=a;
     a=p[i];
     p[i]=p[j];
     p[j]=a;
      }
      
   }
}
printf("\n Gantt chart \n");
for(i=0;i<n;i++)
{
	printf("P %d",p[i]);
}
