#include<bits/stdc++.h>
using namespace std;

int main()
    {
        string str = "aaaaaabcdddababdb";
        int a[26];
        for(int i = 0; i < 26; i++)
            {
                a[i]=0;
            }
        for(int i = 0; i < str.size(); i++)
            {
                a[str[i]-'a']++;
            }
        char ans;
        int maxFreq = -1;
        for(int i=0;i<26;i++)
            {
                if(maxFreq < a[i])
                    {
                        maxFreq = a[i];
                        ans = 'a' + i;
                    }
            }
        cout<<maxFreq<<endl;
        cout<<ans<<endl;
    }