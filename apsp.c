//ALL PAIR SHORTEST PATH
#include <stdio.h>
#define MAX 100
#define OG 999
int d[MAX][MAX];
int d2[MAX][MAX];
int main() {
    int n,i,j,k,l,a,b,w;
    printf("Entern number of nodes:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                d[i][j]=0;
                d2[i][j]=0;
                continue;
            }
            d[i][j]=OG;
            d2[i][j]=OG;
        }
    }
    printf("Enter number of edges:\n");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d %d %d",&a,&b,&w);
        d[a][b]=w;
        d2[a][b]=w;
    }
    
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                d2[i][j]=(d[i][k]+d[k][j]<d[i][j])?d[i][k]+d[k][j]:d[i][j];
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                d[i][j]=d2[i][j];
            }
        }
       
    }
    printf("Final matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
4
6
1 2 3
1 4 5
2 1 2
2 4 4
3 2 1
4 3 2
 */