#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = (1e8);
const LL mod = 10000007;

 LL a,b,c,d,e,f,t,n;
 LL res[100005];
int fn(int n)
{
    for(int i= 0; i<=n;i++)
    {
        if(i==0){
            res[i] = a;
            continue;
        }
        if(i==1){
            res[i] = b;
            continue;
        }
        if(i ==2){
            res[i] = c;
            continue;
        }
        if(i==3){
            res[i] = d;
            continue;
        }
        if(i==4){
            res[i] = e;
            continue;
        }
        if(i==5){
            res[i] = f;
            continue;
        }
        res[i] = res[i-1]+res[i-2]+res[i-3]+res[i-4]+res[i-5]+res[i-6];
        res[i] = res[i]%10000007;
    }
    return res[n];
}
int main()
{
    LL ans;
    cin>>t;
    for(int i = 1; i<=t;i++)
    {
        cin>>a>>b>>c>>d>>e>>f>>n;
        ans = fn(n);
        ans=ans%10000007;
            cout<<"Case "<<i<<": "<<ans<<endl;

        }
    return 0;
}
