#include <bits/stdc++.h>
using namespace std;

void printNextGreaterElement(std::vector <long long int> &v)
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

	std::vector <long long int> v = { 5,3,2,10,6,8,1,4,12,7,4 };
	printNextGreaterElement(v);
	return 0;
	
}
