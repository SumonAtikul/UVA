#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,d;

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;

        d = (b + c) % a;
        if(d==0){
        	d=a;
        	}

        cout << "Case " << i << ": " << d << endl;
    }
    return 0;
}
