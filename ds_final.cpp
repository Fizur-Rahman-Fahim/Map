#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t)
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
    
    cout <<ans<<" "<< count << endl;


       t--; 
    }
    return 0;
}