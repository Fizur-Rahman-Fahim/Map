#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    string ans;
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);
    map<string, int> mp;
    while (ss >> word)
    {
        mp[word]++;
        if (mp[word] > count)
        {
            count = mp[word];
            ans = word;
        }
    }
    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    cout <<ans<<" "<< count << endl;
    return 0;
}