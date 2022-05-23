#include <iostream>
using namespace std;

//print index of subarray euivalent to S....... here we go......

int main(){

    int n , S=15 , sum;
    cin>>n;

    int arr[n];

    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    for(int i=0 ;i<n ; i++){

        int sum=0;
        for(int j=i ; j<n ; j++){

             sum=sum+arr[j];
             if(sum==S){
                 cout<<i<<" "<<j;
                 return 0;
             }
        }
    }

    return 0;
}
