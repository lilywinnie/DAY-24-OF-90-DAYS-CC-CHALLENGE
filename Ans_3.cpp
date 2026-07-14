#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;
    
    while (T--) {
        
        int N;
        cin >> N;
        
        int C[N];
     
        for (int i = 0; i < N; i++) 
            cin >> C[i];
           
        int jolts = 1;
        
        sort(C, C + N);
        
        for (int j = 1; j < N; j++) {
            if (C[j] != C[j - 1]) 
                jolts++;
        }
        
        cout << jolts << "\n";
    }

    return 0;
}
