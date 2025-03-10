#include <bits/stdc++.h>
using namespace std;
// void sp(int a)
// {
//     for(int i=1;i<=a-i;i++)
//     {
//         cout<<" ";
//     }
// }
int c1(int a)
{
    int x=1;
    for(int i=1;i<=a;i++)
    {
        x*=i;
    }
    return x;
}
// int c2(int a)
// {
//     int x=1;
//     for(int i=1;i<a;i++)
//         x*=i;
//     return x;
// }
// int c3(int a)
// {
//     int x=1;
//     for(int i=1;i<a;i++)
//         x*=i;
//     return x;
// }
void nm(int a,int b)
{
    cout<<c1(a)/(c1(b)*c1(a-b))<<" ";
}
int main() {
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a-i;j++)
        cout<<" ";
        for(int j=0;j<=i;j++)
        nm(i,j);
        cout<<endl;
    }
}
qqqqqqq