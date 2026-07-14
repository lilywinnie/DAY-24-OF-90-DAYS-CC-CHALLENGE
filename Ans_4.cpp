#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        
        if(Z%X == 0 && Z%Y == 0 )
            cout << "ANY\n" ;
        
        else if(Z%Y==0)
            cout << "DUCK\n" ;
            
        else if(Z%X==0)
            cout << "CHICKEN\n" ;

        else
            cout << "NONE\n" ;
        
      }

}
