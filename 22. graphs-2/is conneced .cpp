#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

const int N=200005;

vector<int> gr[N];
int vis[N];

void dfs(int cur){
    // cout<<cur<<'\n';
    vis[cur]=1;
    for(int i=0;i<gr[cur].size();i++){
        int to=gr[cur][i];
        if(!vis[to]){
            dfs(to);
        }
    }
}

bool isconnected(int n){
    dfs(1);
    for(int i=1;i<=n;i++){
        if(vis[i]==0) return false;
    }
    return  true;
}

int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        gr[x].pb(y);
        gr[y].pb(x);
    }
    cout<<(isconnected(n)?"YES":"NO");
}
