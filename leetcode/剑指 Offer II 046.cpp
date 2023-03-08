#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,j,n;
    char a[100];
    for(i=0;;i++)
    {
        scanf("%c",&a[i]);
        if(a[i]==',') i--;
        if(a[i]=='u'||a[i]=='l') i--;
        if(a[i]=='\n') break;
    }
    n=1;
    i--;
    for(j=0;j<=i;)
    {
        printf("%c",a[j]);
        j+=pow(2,n);
        n++;
        if(j<=i) printf(",");
    }
    return 0;
}
