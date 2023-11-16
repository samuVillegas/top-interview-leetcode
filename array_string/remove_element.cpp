#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int space = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                k++;
            }
            if((i != nums.size() - 1) && nums[i] == val && nums[i+1] == val){
                space++;
                continue;
            }
            if((i != nums.size() - 1) && nums[i] == val && nums[i+1] != val){
                int temp = nums[i-space];
                nums[i-space] = nums[i+1];
                nums[i+1] = temp;
                k++;
            }
        }
        return k;
    }
};

int main()
{
    cout<<"Hello World";
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 3;
    Solution solution;
    int res = solution.removeElement(nums, val);
    cout << res;
    return 0;
}
