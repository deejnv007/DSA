#include<bits/stdc++.h>
using namespace std;

void subset(vector<int>& nums, int vidx, vector<int>& temp, vector<vector<int>>& res){
      if(vidx == nums.size()){
        res.push_back(temp);
        return;
      }
      temp.push_back(nums[vidx]);
      subset(nums, vidx+1, temp, res);
      temp.pop_back();

      subset(nums, vidx+1, temp, res);
  }

vector<vector<int>> subsets(vector<int>& nums){
      vector<int> temp;
      vector<vector<int>> res;
      subset(nums, 0, temp, res);
      return res;
  }

int main(){
    vector<int> nums = {1,2,3};

    vector<vector<int>> ans = subsets(nums);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; i<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
           cout<<endl;
    }
   return 0;
}

