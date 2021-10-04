#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=1;
    char s[100];
    while(scanf("%s", s)!=EOF){
    if(s[0]!='*'){
        if (strcmp(s,"Hajj")==0){
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if (strcmp(s,"Umrah")==0){
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
            i++;
    }
   }
    return 0;

}
