#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int a[n];
    int sum =0;
    
    for(int i =0; i<n; i++) {
        cin>>a[i];
        sum += a[i];
    }
    sort(a , a+n, greater<int>());
    int x =0;
    int cnt =0;
    
    for(int i =0; i<n; i++) {
        x += a[i];
        cnt++;
        
        if(x > sum - x) 
            break;
          
         
         
    }    
        cout<<cnt;
    
    return 0;
} 
// 160A
          
