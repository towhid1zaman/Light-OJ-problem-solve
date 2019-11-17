#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define endl "\n"

const int mod = 1000000007; // (int)1e9+7
const int N = 10100;
vector<int>node[N];

// prime factorize o(sqrt(n))
void factorize(int n){
    int m = n;
    for(int i = 2; i<=n/i; i++){
        if(n%i !=0)continue;
        node[m].push_back(i);
        while(n%i==0)
            n/=i;
    }
    if(n>1 and n!=m){
        node[m].push_back(n);
    }
}

int bfs(int s, int t){
   if(s==t)return 0;
    int dis[N] ;
    int vis[N];
    memset(vis,0,sizeof vis);
    queue<int>q;
    dis[s]=0;
    q.push(s);
    while(q.size()>0){
        int u = q.front();
        q.pop();
        for(int i = 0; i<node[u].size();i++){
            int v = u+node[u][i];
            if(v<=t and vis[v]==0){
                vis[v]=1;
                dis[v] = dis[u] +1;
                if(v==t){
                    return dis[v];
                }
                q.push(v);
            }
        }
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    for(int i = 4; i<=1000; i++){
            factorize(i);
    }
    int cs= 1;
    int T;
    cin>>T;
    while(T--){
        int s,t;
        cin>>s>>t;
        cout<<"Case "<<cs++<<": "<<bfs(s,t)<<endl;
    }


return 0;
}




