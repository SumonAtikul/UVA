#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,h,w,tc;
    cin >> tc;
    for(int i=1; i<=tc; i++)
    {
        scanf("%d %d %d", &l, &h, &w);
        if(l>20 || w>20 || h>20)
        {
            printf("Case %d: bad\n", i);
        }
        else
        {
            printf("Case %d: good\n", i);
        }
    }
    return 0;
}
