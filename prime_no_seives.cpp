#include<bits/stdc++.h>
using namespace std;

void prime_sieve(int *p)
{
    //mark all odd number is prime number
    for(int i=3;i<=100000;i=i+2)
    {
        p[i]=1;
    }
    //mark all the multiple odd number is not prime number
    for(long long i=3;i<=100000;i+=2)
    {
        if(p[i]==1)
        {
           for(long long  j=i*i;j<=100000;j=j+i)
           {
              p[j]==0;
           }
        }
    }
    p[2]=1;
    p[1]=p[0]=0;
}
int main()
{
    int n;
    cin>>n;
    int p[100000]={0};
    prime_sieve(p);
    for(int i=0;i<=n;i++)
    {
        if(p[i]==1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
