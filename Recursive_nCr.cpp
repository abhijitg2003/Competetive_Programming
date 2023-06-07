#include <bits/stdc++.h>
using namespace std;


int ncr(int n, int r){
    if(r>n){
        return 0;
    }
    if(r==0){
        return 1;
    }
    if(r==1){
        return n;
    }
    if(n==1){
        return 1;
    }

    return ncr(n-1,r)+ncr(n-1,r-1);
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
    return 0;
}