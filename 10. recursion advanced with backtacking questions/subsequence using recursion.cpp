#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    // subsequence using bitmasking
    string s;
    cin>>s;
    int i,j,n=s.size();
    for(i=0;i<(1<<n);i++){
        for(j=0;j<n;j++){
            if((1<<j)&i){
                cout<<s[j];
            }        
        }
        cout<<'\n';
    }
}
        