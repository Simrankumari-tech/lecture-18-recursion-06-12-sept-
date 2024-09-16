#include<iostream>
using namespace std;
void toh(int n, char src, char helper , char des){
// base acse
if (n == 0) return ;

// recursive case
//1, take n-1 disk form src to helper
toh(n-1, src , des ,helper ); 
//2. // take nth disk form src to des
cout << "take " << n << "  disk from " << src << " to" << des  << endl;
// take n-1 disk from helper to des
toh(n-1, helper, src , des) ;
}
int main(){
    int n;
    cin >> n;
    toh(n , 'A' , 'B' , 'C');
    return 0;
}