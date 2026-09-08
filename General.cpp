#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    
    int a[n];
    
    
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    
    int maxnum = a[0];
    int minum = a[0];
    int posmax = 0;
    int posmin = 0;
    
    
    for(int i = 1; i < n; i++) {
        if(a[i] > maxnum) {       // we need left most max
            maxnum = a[i];
             posmax = i;
        }
    }
    for(int m = 1; m<n; m++) {
        if(a[m] <= minum) {       // we need right most min
            minum = a[m];
             posmin = m;
        }
    }
    int steps = posmax + ((n-1) - posmin);
    
    if(posmax > posmin) {
        steps--;
    }
    cout<<steps;
    
return 0;
}

// 144A
