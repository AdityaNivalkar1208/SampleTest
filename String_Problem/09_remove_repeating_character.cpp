#include<bits/stdc++.h>
using namespace std;

int main()
    {
        string str = "asaaaaaasvassssaaa";
        int n = str.size();
        char ans[100];
        ans[0] = str[0];
        int cnt = 1;
        for(int i=1; i<n; i++)
            {
                if(str[i] != str[i-1])
                    {
                        ans[cnt] = str[i],cnt++;
                    }
            }
            cout << ans << endl;
    }