#include<bits/stdc++.h>
int main()
{
    long long n,i,j,turns;
    float w[1000];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        scanf("%d",&w[i]);
    i = 0;
    j = n-1;
    turns = 0;
    while(i < j)
    {
        if(w[i]+ w[j] <=3.0)
        {
            i += 1;
            j -= 1;
            turns +=1;
        }
        else
        {
            turns +=1;
            j -= 1;
        }
if(i == j)
        {
            turns += 1;
        }
    }

    printf("%d",turns);
}
