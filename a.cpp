#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];
    while(cin.getline(s,sizeof(s)))
    {
        sort(s,s+strlen(s));
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]==' ')
            continue;
            else
            cout<<s[i];
        }
    }
}