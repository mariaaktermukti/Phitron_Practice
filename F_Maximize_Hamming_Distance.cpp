#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int T;
    cin >> T;                                   
    while (T--){
        int N, M;
        cin >> N >> M;
        vector<string> S(M);
        for (int i = 0; i < M; i++) {
            cin >> S[i];
        }

        ll answer = 0;
        for (int j = 0; j < N; j++) {
            int cnt0 = 0, cnt1 = 0, cntQ = 0;
            for (int i = 0; i < M; i++) 
            {
                char c = S[i][j];
                if (c == '0')      cnt0++;
                else if (c == '1') cnt1++;
                else               cntQ++;
            }
            ll halfFloor = M / 2;
            ll halfCeil  = (M + 1) / 2;

            ll candidates[2] = { halfFloor, halfCeil };  
            ll best = 0;
            for (ll X : candidates) 
            {
                X = max<ll>(cnt1, min<ll>(cnt1 + cntQ, X));
                best = max(best, X * (M - X));
            }
            answer += best;
        }

        cout << answer << "\n";
    }
    return 0;
}
