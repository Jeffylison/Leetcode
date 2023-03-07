#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct date
{
    int r;
    int g;
    int b;
};
int main()
{
    struct date rings[10];
    char a[100];
    int i,j;
    scanf("%s",a);
    int m=strlen(a);
    //printf("%d ",m);
    for(i=1;i<m;i+=2)
    {
        int t=a[i]-'0';
        //printf("%d ",t);
        rings[i].r=rings[i].g=rings[i].b=0;
        if(a[i-1]=='R') rings[t].r=1;
        else if(a[i-1]=='G') rings[t].g=1;
        else if(a[i-1]=='B') rings[t].b=1;
    }
    int max=0;
    for(i=0;i<10;i++)
        //printf("%d %d %d\n",rings[i].r,rings[i].g,rings[i].b);
        if(rings[i].r==rings[i].g==rings[i].b==1)
            max++;
    printf("%d\n",max);
    return 0;
}
