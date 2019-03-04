#include <bits/stdc++.h>
using namespace std;

void NextGreaterElement(vector <long long int> &v)
{
	std::stack <long long int> stk;
	long long int arr[v.size()];
	for (long long int i = v.size() - 1 ; i >= 0 ; i--) 
	{	
		while(!stk.empty() && stk.top() < v[i])
			stk.pop();			
		stk.empty()  ? (arr[i] = -1) : (arr[i] = stk.top());
		stk.push(v[i]);		
	}
	for(auto i : arr)
	{
		std::cout << i << " ";
	}
		std::cout << "\n";
}
int main() 
{
	int T;
	cin >> T;
	while(T--)
    {
        vector <long long int> v;
        long long int n,num;
        cin >> n;
        for(int i = 0; i < n; i++)
	    {
	        cin >> num;
	        v.push_back(num);
	    }
	    NextGreaterElement(v);
	    v.clear();
    }
	return 0;
}
