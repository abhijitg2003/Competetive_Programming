
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    cout<<"the number of divisors is : "<<cnt;
    return 0;
}
*/



//MOre efficient O(sqrt n ) time complexity algorithm 

/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if(i!=n/i)
                cnt++;
        }
    }

    cout<<"the number of divisors of n is : "<<cnt;
    return 0;
} 
*/


// 1 till n all count of divisors


/*
#include <bits/stdc++.h>
using namespace std;
int count_divs(int n){
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if(i!=n/i)
                cnt++;
        }
    }
    cout<<"the number of divisors of "<<n<<" is : "<<cnt<<endl;
}

int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        count_divs(i);
    }

    
    return 0;
}
*/


//Optimised 1 till n count of all divisors of 1 till n

/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> div(n+1);

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            div[j]++;

        }
    }

    for(int i=1;i<=n;i++){
        cout<<i<<"'s number of factors is "<<div[i]<<endl;
    }


}
*/

// Sieve of Eratothenes O(nlog(n))

/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> prime(n+1,1);
    prime[1]=0;

    for(int i=2;i<=n;i++){
        if(!prime[i])
            continue;


        for(int j=2*i;j<=n;j+=i){
            prime[j]=0;
        }
    }

    // prime[x] stores whether x is prime or not

    for (int i = 1; i <= n; i++)
    {
        cout<<prime[i]<<endl;
    }
    
    return 0;
}
*/


// Better one which is even  faster O(nlog(logn))

/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> prime(n+1,1);
    prime[1]=0;

    for(int i=2;i<=n;i++){
        if(!prime[i])
            continue;


        for(int j=i*i;j<=n;j+=i){
            prime[j]=0;
        }
    }

    // prime[x] stores whether x is prime or not

    for (int i = 1; i <= n; i++)
    {
        cout<<prime[i]<<endl;
    }
    
    return 0;
}
*/


//GCD of two numbers a and b

/*
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(a==0)
        return b;
    return gcd(b%a,a);

}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}
*/

// direct function cpp to find GCD

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<__gcd(a,b);
    return 0;
}