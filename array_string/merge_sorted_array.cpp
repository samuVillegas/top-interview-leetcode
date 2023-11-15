#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3;
        int j = 0;
        int k = 0;
        for(int i = 0; i < (m+n); i++){
            if(j == m)
                nums3.push_back(nums2[k++]);
            else if(k == n)
                nums3.push_back(nums1[j++]);
            else if(nums1[j] <= nums2[k])
                nums3.push_back(nums1[j++]);
            else
                nums3.push_back(nums2[k++]);
        }
        nums1 = nums3;
    }
};

int main()
{
    cout<<"Solution";
    vector<int> nums1 = {1,2,4,5,6,0};
    vector<int> nums2 = {3};
    int m = 5;
    int n = 1;
    Solution sol;
    sol.merge(nums1, m, nums2, n);
    return 0;
}