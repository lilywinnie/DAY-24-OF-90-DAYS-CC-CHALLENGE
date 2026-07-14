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
        
        int refills = ceil((double)X / Y);

        int total_cost = refills * Z;
        cout << total_cost << "\n";
        
      }

}
