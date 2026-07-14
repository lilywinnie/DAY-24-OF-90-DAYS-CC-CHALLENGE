#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int X;
        cin>>X;
        
        if(X%3==0)
            cout<<0<<"\n";
            
        else if(X%3==1)
            cout<<2<<"\n";
            
        else
            cout<<1<<"\n";
        
     }
    
    return 0;
    
}
