#include <bits/stdc++.h>

using namespace std;

void SmallerElement(vector <long long int> &v)
{
    for(long long int i = 0; i < v.size() -1 ; i++)
    {
        v[i] > v[i+1] ? cout<< v[i+1] : cout << -1;
        cout << " ";
    }
    cout << -1 << endl;
}
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long int N,num;
        cin >> N;
        vector <long long int> v;
        for(long long int i = 0; i < N; i++)
        {
           cin >> num;
           v.push_back(num);
        }
        SmallerElement(v);
        v.clear();
    }
    return 0;
}
