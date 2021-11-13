#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
  map <int, int> myMap;
  for (int i=0;i<nums.size();i++) 
  {
    if (myMap.find(target-nums[i]) != myMap.end()) {
      return {(myMap[target-nums[i]]), (i)};
    }
    myMap[nums[i]] = i;    
  }     
  return {};
}


int main() {
  vector<int> input = {14,3,-9,-7,0,2,3,4,-15};
  vector<int> output;
  int target = 6;

  output = twoSum(input, target);

  for (auto i : output)
    cout<<i<<" ";

  return 0;
} 