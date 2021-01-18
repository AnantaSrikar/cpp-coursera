//	Week-1 soultion, C++ For C Programmers, Part A
//	Author: Ananta Srikar

#include<iostream>
#include<vector>

using namespace std;

// Defining N
const int N = 40;

// Making the generic sum fuction using templates

template <class summable>
void sum(summable &p, int n, vector<summable>& d)
{
	p = 0;

	// Loop to add all the values inside the vector
	for(int i = 0; i < n; ++i)
		p += d[i];
}

int main()
{
	int accum = 0;

	vector<int> data;

	for(int i = 0; i < N; ++i)
		data.push_back(i);

	sum(accum, N, data);

	cout<<"sum is "<<accum<<endl;

	return 0;
}