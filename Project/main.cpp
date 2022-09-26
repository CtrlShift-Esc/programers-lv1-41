#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
	set<int> s;
	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = i + 1; j < numbers.size(); j++)
		{
			if (i == j)
				continue;
			s.insert(numbers[i] + numbers[j]);
		}
	}
	vector<int> answer(s.begin(), s.end());
	return answer;
}

void main()
{
	//test
	//auto ret = solution({2,1,3,4,1});
}