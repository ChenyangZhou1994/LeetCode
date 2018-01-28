#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;


class Solution {
	public:
    	vector<int> twoSum(vector<int>& nums, int target) {
        	vector<int> ans;
        	int len = nums.size();
        	for (int i = 0; i < len; i++)
			{
        		for (int j = i + 1; j < len; j++) 
				{
        			if (nums[ i ] + nums[ j ] == target)
					{
        				ans.push_back( i );
        				ans.push_back( j );
					}
				}
			}
			return ans;
    	}
};

int main()
{
	Solution solution;
	vector<int> num;
	vector<int> result;
	int target, N , tmp;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		num.push_back( tmp );
	}
	cin >> target;
	result = solution.twoSum(num, target);
	cout << result[ 0 ] << " " << result [ 1 ] << endl;
	return 0;
} 
