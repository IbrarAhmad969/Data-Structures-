#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int secondLargestVal(vector<int>& arr){

  int size = arr.size();

  // sort the array 

  sort(arr.begin(), arr.end());

  // traverse the array and find the second larger value 

  // start from the size - 2 position 

  for(int i = size -2; i>=0; i--){  /// let say 1, 2, 3, 4, 5 , the pointer will initially be pointing to 4

    if(arr[i] != arr[size - 1]){  // this line will insure that value is not duplicate  
      return arr[i];             // for example 1-2-3-4-5-5  (in this case array could return 5, but we need 4. that's why check if both the values are not same)
    }
  }
  return -1;  // No value is found.
}

int main(){

  vector<int> arr = {2, 4, 1, 4, 5, 8, 10, 23};
  int secoundLargestValue = secondLargestVal(arr);
  cout<< "Second Larger value is : " << secoundLargestValue<<endl;
  
}
