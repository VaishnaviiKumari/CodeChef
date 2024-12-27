//Difficulty:  548  
  
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z; 

        // Since higher speed means lower time, we need to find the minimum time
        if (x < y && x < z) 
            cout << "ALICE" << endl;
        else if (y < x && y < z) 
            cout << "BOB" << endl;
        else 
            cout << "CHARLIE" << endl;
    }
    return 0;
}
