#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        int A[N];
        int totalCost = 0;
        
        for (int i = 0; i < N; i++) {
           cin >> A[i];
           totalCost += A[i] * (i + 1);
        } 
        
        cout << totalCost << "\n";
    }
    
    return 0;
}
