#include<iostream>
using namespace std;

int ways(int i, int j){
    // base caes
    
    if(i== 0 and j== 0) return 1;
    // recursive case
    int ans =0;
    for(int k =0; k<= i-1 ; k++)  ans += ways(k, j) ;
    for(int k= 0; k <= j-1;k++)  ans+= ways(i,k);
    return ans;
}
int main(){
    cout << ways(3,3) ;
    // for(int i= 0; i<4; i++){
    //     for(int j= 0; j< 4; j++){
    //         cout << ways(i,j) << " "; 
    //     }
    //     cout << endl;
    // }
    return 0;
}
