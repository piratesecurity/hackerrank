#include <iostream>
using namespace std;

int height(int n) {
    int h=1,i=1;
    while (i<=n)
        {
        if (i%2==1) h=h*2;
        else h=h+1; 
        i++;
    }
    return h;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;       
        cout << height(n) << endl;
    }
}
