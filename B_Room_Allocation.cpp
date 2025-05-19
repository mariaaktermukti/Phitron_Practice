#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        long long rooms = 0;
        for (int i = 0; i < N; i++) 
        {
            int Ai;
            cin >> Ai;
            rooms += (Ai + 1) / 2;
        }
        cout << rooms << "\n";
    }
    return 0;
}
