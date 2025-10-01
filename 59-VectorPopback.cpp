#include <bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin >> n;
    //Jodi amra element nije theke dei tahole first bracket dewa lage na
    vector <int> vec = {4,1,3,6};
    // vector <int> vec2(n);

    vec.pop_back();

    //output
    for(int i=0; i< vec.size(); i++){
        cout << vec[i] << " ";
    }

    return 0;
}