#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n,0);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        bool flag=false;
        for(int i=1;i<n;i++)
        {
            if(v[i]<=v[i-1])
            {
                flag=true;
                break;
            }
        }
        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}