#include <stdio.h>
#include <stdlib.h>
int n,s[100];

int valid(int k)
{
    int j;
    ///0-invalid
    ///1-valid
    if(k==0)
        return 1;
    for(j=k-1;j>=0;j--)
        if(s[k]==s[j])
            return 0;
    return 1;
}


int solutie(int k)
{
    if(k==n-1)
    ///if(k==2)
        return 1;
    return 0;
}

void afisare(int k)
{
    int i;
    printf("Solutia: ");
    for(i=0;i<n;i++)
        printf("%d ",s[i]);
    printf("\n");
}
void backi(int k)
{
    int i;
    for(i=1;i<=n;i++)
    {
        s[k]=i;
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
    }

}
int main()
{
    scanf("%d",&n);
    backi(0);
    return 0;
}
