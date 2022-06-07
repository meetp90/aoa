#include <stdio.h>
#define MAX 100
int array[MAX];
int n;

void get(){
    int i;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    printf("\n Enter the elements : \n");
    for(i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
}
void selection()
{
    int i, j, mini, temp;
    for (i = 0; i < n - 1; i++)
    {
        mini = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[mini])
                mini = j;
        }
        temp = array[i];
        array[i] = array[mini];
        array[mini] = temp;
    }
}

void print(){
    int i;
    printf("sorted array : ");
    for(i = 0; i < n; i++){
        printf("%d\t",array[i]);
    }
}

void main(){
    get();
    selection();
    print();
}