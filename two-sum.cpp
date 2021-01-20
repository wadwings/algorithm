#include <vector>
#include <map>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> b(2);
        for(int x = 0; x < nums.size(); x++){
            if(m.count(target - nums[x]))
                return{m[target - nums[x], x]};
            m[nums[x]] = x;
        }
        return {};
    }
};

int main(){
    vector<int> test = {2, 7, 3, 9};
    Solution s;
    s.twoSum(test, 9);
    return 0;
}