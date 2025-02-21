#pragma once
#include<string>
#include<vector>
#include<unordered_map>
#include<stack>
namespace problems::easy
{
	bool isValid(std::string s)
	{
		if (s.size() % 2 != 0) return false;
		std::stack<char> st;
		for (char c : s) 
		{
			if (c == '(' || c == '[' || c == '{') {
				st.push(c);
			} 
			else {
				if (st.empty()) {
					return false;
				}
				char top = st.top();
				st.pop();
				if ((top == '(' && c != ')') ||
					(top == '[' && c != ']') ||
					(top == '{' && c != '}')) 
				{
					return false;
				}
			}
		}
		return st.empty();
	}
}