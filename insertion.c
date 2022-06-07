#include<stdio.h>
#define MAX 100
int arr[MAX];
int n;
void setter()
{
    int i;
    printf("enter no of elements:\n");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void getter()
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insertionSort()
{
    int i,j,key;
    for(j=1;j<n;j++)
    {
        key=arr[j];
        i=j-1;
        while(i>=0 && arr[i]>key)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
}
int main()
{
    setter();
    insertionSort();
    getter();
}