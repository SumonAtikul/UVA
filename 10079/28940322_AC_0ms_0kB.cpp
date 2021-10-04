#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,cuts;
    for( ; ; ){
    cin>>n;
    if(n<0)
    break;
    cuts=n*(n+1)/2+1;
    cout<<cuts<<endl;
    }
    return 0;
}