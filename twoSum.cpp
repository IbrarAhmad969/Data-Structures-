#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> twoSum(vector<int>& nums, int target){
  int size = nums.size();
  for(int i =0; i<size; i++){
    for(int j = i+1; j<size; j++){
      if(nums[i] + nums[j] == target){
        return {i, j};
      }
    }
  }

  return {};
}

int main() {
  
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;

  vector<int> result;
  result = twoSum(nums, target);
  cout<< " index at : ";
  for(int i : result){
    cout<<i << " ";
  }

}
