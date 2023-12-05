#include <stdio.h>
#include <stdlib.h>
int nrCoins=6,cashToReturn=30,s[100],a[100]={10,10,5,20,5,5},suma=0;

int valid(int k)
{
    if(k>=nrCoins)
        return 0;
    if(suma <= cashToReturn)
        return 1;
    return 0;
}


int solutie(int k)
{
    if(k == nrCoins-1 && suma == cashToReturn)
    ///if(k==2)
        return 1;
    return 0;
}

void afisare(int k)
{
    int i;
    printf("Solutia: ");
    for(i=0;i<=k;i++)
        if(s[i]==1)
        printf("%d ",a[i]);
    printf("\n");
}
void backi(int k)
{
    int i;
    for(i=0;i<=1;i++)
    {
        s[k]=i;
        if(i==1)
            suma+=a[k];
        if(valid(k)==1)
        {
            if(solutie(k)==1)
            {
                afisare(k);
            }
            else
            {
                backi(k+1);
            }
        }
        if(i==1)
            suma-=a[k];
    }

}
int main()
{
    backi(0);
    return 0;
}
