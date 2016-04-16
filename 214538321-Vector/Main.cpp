#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	vector<int> Sam;

	for (int i = 0; i <= 19; i++)
	{
		Sam.push_back(rand() % 100 + 1);
	}

	sort(Sam.begin(), Sam.end());

	return 0;
}