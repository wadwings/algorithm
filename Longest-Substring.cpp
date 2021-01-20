#include <map>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mod[127] = {0}, count = 0, max = 0;
        for(int x = 0; x < s.size(); x++){
            if(mod[s[x]]){
                while(s[x - count] != s[x])mod[s[x - count--]] = 0;
            }
            else{
                mod[s[x]] = 1;
                ++count;
                if(count > max){
                    max = count;
                }
            }
        }
        return max;
    }
};

int main(){
    Solution s;
    cout << s.lengthOfLongestSubstring("pwwkew") << endl;
    return 0;
}