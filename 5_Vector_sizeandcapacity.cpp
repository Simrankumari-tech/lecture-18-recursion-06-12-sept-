#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    for(int i= 1; i<=5; i++){
        v.push_back(i) ;
        cout << "after inserting " << i << ",size : " << v.size() << " , capacity : "<< v.capacity() << endl;
    }
    for(int i= 0; i<v.size() ; i++){
        cout << v[i] << " ";
    }
    return 0;
}