// Duplicate cahr in string
// time : O(NLogN) --> N=Length of string.
// space : O(k) --> k=size of map (0<=k<=Length of string).
#include<iostream>
#include<map>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s ;
    cin >> s;

    map <char, int> mp;
    for (int i = 0; i < s.length(); ++i) {
        mp[s[i]]++;
    }

    for (auto it : mp) {
        if (it.second > 1) {
            cout << it.first << " " << it.second << endl;
        }
    }
    return 0;
}

/*
// 2nd approach
// Time : o(n)
// space : o(1)

int arr[26] = {0} ;
int ARR[26] = {0} ;
string s;
cin >> s;
for (int i = 0; i < s.size(); ++i)
{
    // for capital case
    if (s[i] < 97) {
        ARR[s[i] - 65]++;
    }
    // for lower case
    arr[s[i] - 97]++;
}
for (int i = 0; i < 26; i++) {
    // for print lower case
    if (arr[i] > 1) {
        char ch = i + 97;
        cout << ch << " " << arr[i] << endl;
    }
    // for upper case
    if (ARR[i] > 1) {
        char ch = i + 65;
        cout << ch << " " << ARR[i] << endl;
    }
}

*/