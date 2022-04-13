#include<bits/stdc++.h>
using namespace std;

//int fibo(int n){
//    if(n==0 || n==1)
//        return n;
//
//    else
//        return fibo(n-1)+fibo(n-2);
//}
//

int arr[6] = {-1, -1, -1, -1, -1, -1};

int fibo(int n){
    if(arr[n] == -1){
        int res;
        if(n == 0 || n == 1)
            res = n;

        else
           res = fibo(n-1) + fibo(n-2);
        arr[n] = res;

    }
      return arr[n];
}

int main(){
    int n;
    cin>> n;
    int res = fibo(n);
    cout<<res<<"\n";
    return 0;
}
