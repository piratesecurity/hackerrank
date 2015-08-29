#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    int i=0;
    while (i<T)
        {
        int N,K;
        cin >> N >> K;
        int j=0,count=0;
        while (j<N)
            {
            int num;
            cin >>num;
            if (num<=0) count++;
        
            j++;    
        }
        if (count<K) cout <<"YES" <<endl;
        else cout << "NO" << endl;
            
        
    i++;}
    return 0;
}
