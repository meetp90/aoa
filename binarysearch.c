#include<stdio.h>
#define MAX 100

void main()
{
	int arr[MAX];
    int ValueToFind,n,i;
    printf("Enter the length of the array to search : ");
    scanf("%d",&n);
    printf("\nEnter the element ");
    for(i =0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to search : ");;
    scanf("%d",&ValueToFind);
    int ans=-1;
    int length=sizeof(arr)/sizeof(int);
    int start=0;
    int end=length-1;
    while(start<=end)
    {
		    int mid=start+(end-start)/2; 

            if(arr[mid]==ValueToFind)  
            {
                ans=mid;
                break;
            }
            else if(arr[mid]>ValueToFind) 
            {
                end=mid-1;
            }
            else 
            {
                start=mid+1;
            }
        }
        if (ans==-1)
        {
             printf("element not found\n");
        }
        else
        {
             printf("index = %d",ans);
        }
    }