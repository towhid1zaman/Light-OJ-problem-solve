#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

                int n,sum=0;
                 cin>>n;
                 int a[n+1];
                 if(n<=25)
                 {
                      for(int i = 0; i<n;i++)
                                        {
                                            cin>>a[i];
                                                if(a[i]==a[i-1])
                                                {
                                                    cout<<i-1<<" "<<a[i-1]-(i-1)<<endl;
                                                }
                                                if(a[i] !=a[i-1])
                                                {
                                                    cout<<i-i<<" "<<a[i]<<endl;
                                                }
                                        }
                 }


    return 0;
}
