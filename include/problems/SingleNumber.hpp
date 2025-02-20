#pragma once
#include<string>
#include<vector>
#include<unordered_map>

namespace problems::easy
{
	int singleNumber(std::vector<int>& nums)
	{
		int64_t result = 0;
		for (size_t i = 0; i < nums.size(); i++) {
			result ^= nums[i];
		}
		return result;
	}
}