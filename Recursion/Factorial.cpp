#include<bits/stdc++.h>
using namespace std;
int Fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n * Fact(n - 1);
}

int main()
{
    int n;
    cout<<"Enter Number : "<<endl;
    cin>>n;
    Fact(n);
    cout<<Fact(n)<<endl;
    return 0;
}