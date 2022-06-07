#include<stdio.h>
#define MAX 100
int profit[MAX],weight[MAX];
float ratio[MAX];
int kcap,n;
void sortBag()
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ratio[j]<ratio[j+1])
            {
                temp=ratio[j];
                ratio[j]=ratio[j+1];
                ratio[j+1]=temp;

                temp=profit[j];
                profit[j]=profit[j+1];
                profit[j+1]=temp;

                temp=weight[j];
                weight[j]=weight[j+1];
                weight[j+1]=temp;
            }
        }
    }
}
 
int main()
{
    int i,rem;
    float sum;
    printf("enter no of elements:\n");
    scanf("%d",&n);
    printf("enter profit and weight:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&profit[i],&weight[i]);
        ratio[i]=(float)profit[i]/weight[i];
    }
    printf("enter knapsack capacity:\n");
    scanf("%d",&kcap);
    sortBag();
    rem=kcap;
    sum=0;
    for(i=0;i<n;i++)
    {
        if(rem>=weight[i])
        {
            rem-=weight[i];
            sum+=profit[i];
        }
        else
        {
            sum+=(float)profit[i]*((float)rem/weight[i]);
            rem=0;
        }
    }
    printf("total profit: %f\n",sum);
}
/*
3
25 18
24 15
15 10
20
*/