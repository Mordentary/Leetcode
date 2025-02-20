#pragma once
#include<string>
#include<vector>

namespace problems::easy
{
	std::string mergeAlternately(std::string word1, std::string word2)
	{
		std::string result;
		size_t length1 = word1.length();
		size_t length2 = word2.length();
		//Slower code on leetcode with this, but better for big strings
		//result.reserve(length1 + length2);
		int maxLength = length1 > length2 ? length1 : length2;
		for (size_t i = 0; i < maxLength; ++i)
		{
			if (i < length1)
				result.push_back(word1[i]);
			if (i < length2)
				result.push_back(word2[i]);
		}
		return result;
	}
}