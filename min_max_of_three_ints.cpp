#include <bits/stdc++.h>
using namespace std;
int max(int a,int b,int c){
    return max(max(a,b),c);
}

int min(int a,int b,int c){
    return min(min(a,b),c);
}
int main(){
    cout<<max(1,2,3)<<endl;
    cout<<min(1,2,3)<<endl;
    return 0;
}