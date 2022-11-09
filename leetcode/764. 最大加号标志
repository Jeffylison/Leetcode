#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],i,j,x,y,n,k;
    char mines;
    scanf("%d\n[[%d,%d]]",&n,&x,&y);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            a[i][j]=1;
    a[x][y]=0;
    for(k=1;k;k)
        {
            if(a[x-1][y-1]!=1)
            {k=0;break;}
            if(a[x-1-k][y-1]==a[x-1][y-1-k]==a[x-k][y]==a[x][y-k]==1)
               k++;
            else break;
        }
    printf("%d",k);
    return 0;
}
