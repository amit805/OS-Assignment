#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
 {
   int a,n,i,j;
   int p[20],pp[20],bt[20],tq,wt[20],tat[20],avgwt,avgtat,at[20];
 
   printf("Enter no of process: ");
   scanf("%d",&n);
   printf("Enter time quantum:");
   scanf("%d",&tq);
   printf("\nEnter burst time,time priorities,Arrival time \n");
 
   for(i=0;i<n;i++)
    {
      printf("\n Process%d ",i+1);
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
wt[0]=0;
avgwt=0;
tat[0]=bt[0];
avgtat=tat[0];
for(i=1;i<n;i++)
 {
    if(tq<n || tq>n) 
	{
     wt[i]=tat[i-1];
     avgwt+=wt[i];
     tat[i]=wt[i]+bt[i];
     avgtat+=tat[i];
    }
 }

printf("\n Required Gantt chart is: \n");
for(i=0;i<n;i++)
{
	printf("P%d",p[i]);
}

for(i=0;i<n;i++)
{
printf("\n  %d",p[i]); 
printf("\t\t %d",bt[i]);
printf("\t\t %d",wt[i]);
printf("\t\t %d",tat[i]);
printf("\t\t %d",pp[i]);
printf("\t\t %d",at[i]);
}
avgwt/=n;
avgtat/=n;
printf("\n Average Wait Time : %d ",avgwt);
printf("\n Average Turn Around Time : %d",avgtat);
getch();
}
