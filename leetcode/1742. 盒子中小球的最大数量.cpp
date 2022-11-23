#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,a[101],t,i,max,x;
    scanf("%d%d",&n,&m);
    for(i=1;i<100;i++)
        a[i]=0;
    for(n;n<=m;n++)
    {
        t=0;
        x=n;
        while(x>0)
        {
            t+=x%10;
            x/=10;
        }
        a[t]++;
    }
    max=a[1];
    for(i=1;i<100;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("%d",max);
    return 0;
}
