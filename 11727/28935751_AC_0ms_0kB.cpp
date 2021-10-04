#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, ans;
    while(scanf("%d",&t)==1)
    {
        for(int i=1;i<=t;i++)
        {
            cin >> a >> b >> c;
            if((b>a && b<c)||(b<a && b>c)){
                ans=b;
            }
            else if((c>a && c<b)||(c<a && c>b)){
                ans=c;
            }
            else{
                ans=a;
            }
            printf("Case %d: %d\n",i,ans);
        }
    }
    return 0;
}
