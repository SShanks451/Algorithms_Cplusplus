#include<bits/stdc++.h>
using namespace std;

int main(){
    // Given N strings, print unique strings in lexographical order with their frequencies

    map<string,int> m;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        m[s] += 1;
    }
    for(auto &pr : m){
        cout << pr.first << " " << pr.second << endl;
    }



}