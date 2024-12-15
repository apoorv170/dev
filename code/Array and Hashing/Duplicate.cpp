#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool containsDuplicate (vector<int> nums) {
    unordered_map<int , int> umap;
    for (int i = 0; i < nums.size() ; i++) {
        umap[nums[i]]++;
    }
    for (auto x : umap) {
        if (x.second > 1) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> nums{1,2,3,3};
    bool ans = containsDuplicate(nums);
    if (ans == 1) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}