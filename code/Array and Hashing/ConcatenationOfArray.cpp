#include <iostream>
#include <vector>
using namespace std;

vector<int> concatArray (vector<int>& nums) {
    vector<int> ans;
    for (int i = 0 ; i < nums.size() ; i++) {
        ans.push_back(nums[i]);
    }
    for (int i = 0 ; i < nums.size() ; i++) {
        ans.push_back(nums[i]);
    }
    return ans;
}


int main() {
    vector<int> nums{1,2,1};
    vector<int> ans = concatArray(nums);
    for(auto x : ans) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}