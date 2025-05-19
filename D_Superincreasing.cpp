#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  
    while (T--) 
    {
        long long N, K, X;
        cin >> N >> K >> X;  

        if (K > 31) 
        {
            cout << "No\n";  
        } 
        else 
        {
            long long threshold = 1LL << (K - 1);
            cout << (X >= threshold ? "Yes\n" : "No\n");  
        }
    }
    return 0;
}
