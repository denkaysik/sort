#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void sort(vector<int> &v, int a0, int b0)
{
	auto d = v[b0];
	auto a = a0;
	auto b = b0;
	do
	{
		while (v[a] < d)
			a++;
		while(v[b] > d)
			b--;
		if (a <= b)
		{
			swap(v[a], v[b]);
			a++;
			b--;
		}
	} while(a <= b );
	if (b > a0)
		sort(v, a0, b);
	if (a < b0)
		sort(v, a, b0);
}

int main() 
{
	vector<int> v; //
	vector<int>vk3;
	vector<int>vec;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		v.push_back(i);
		
	for (size_t i = 0; i < v.size(); i++)
		swap(v[i], v[rand() % (v.size() - i) + i]);
		
	for (int i = 1; i <= n; i++)
	{
	
	if(v[i] % 3 ==0 && (v[i] != 0))
		vk3.push_back(v[i]);
	}	
	
	for (int i = 0; i < n; i++)
	{
	
	if(v[i] % 3 !=0)
		vec.push_back(v[i]);
	}
	
	sort(vk3, 0, vk3.size() - 1);
	sort(vec, 0, vec.size() - 1);
	for(auto i: vk3)
		cout << i << " ";
	for(auto i: vec)
		cout << i << " ";
	system("pause");
	return 0;
}
