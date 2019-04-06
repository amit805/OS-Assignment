#include<stdio.h>
#include<conio.h>
int main()
 {
   int x,n,p[10],pp[10],bt[10],i,tq,j;
 
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
     x=pp[i];
     pp[i]=pp[j];
     pp[j]=x;
     x=bt[i];
     bt[i]=bt[j];
     bt[j]=x;
     x=p[i];
     p[i]=p[j];
     p[j]=x;
      }
      
   }
}
