#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        long long X, Y;
        cin >> X >> Y;
        cout << (Y / (X - 1)) << "\n";
    }
    return 0;
}
