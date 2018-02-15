#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
    
private:    int My_binSearch(vector<int>& nums, int start, int end, int target) //returns the index of targget in the sorted nums, or -1 if not found
    {
        if (start==end)
        {            
         if (nums[start]==target)
             return start;
         else
             return -1;
            
        }
        
        int mid = (start+end)/2; // could also do: start+(end-start)/2
        
        int ans1 = My_binSearch(nums, start, mid, target);
        if (ans1 == -1)
            return My_binSearch(nums, mid, end, target);
        else
            return ans1;
        
        
    }
    
public:
    
    
    
    
    
    
    
    
    
    
   vector<int> twoSum(vector<int>& nums, int target) {
       
     vector<int>:: iterator i;
     vector<int>:: iterator j;
     vector<int>sol(2);
     
    for (i=nums.begin();i!=nums.end();i++)
    {
    
        for (j=i+1;j!=nums.end();j++)
        {
            
         if(*i+*j == target)       
         {
         
              int ind1 = std::distance(nums.begin(),i);
              sol[0]=ind1;
              int ind2 = std::distance(nums.begin(),j);
              sol[1]=ind2;        
         }   
         
        }        
        
    }

   return sol;
        
    }
    
    
    vector<int> twoSum2(vector<int>& nums, int target) {
     
     vector<int>sol(2);
     
    for (int i=0;i<nums.size();i++)
    {
    
        for (int j=i+1;j<nums.size();j++)
        {
            
         if(nums[i]+nums[j] == target)       
         {
         
              
              sol[0]=i;              
              sol[1]=j;        
         }   
         
        }        
        
    }

   return sol;
        
    }
    
     vector<int> twoSum3(vector<int>& nums, int target) {
     
     vector<int>sol(2);
    
     sort(nums.begin(),nums.end());
     
      int ind = Binsearch(nums,target);
   
       cout<<"bin:"<<ind<<endl;
     
     /* for (int k=nums[0];k<nums.size();k++)
               cout<<k<<":"<<nums[k]<<endl;
       */
     
     /* for (int k=nums[0];k<nums.size();k++)
      {
        int first = nums[k];
        int second = target-first;
        if (second < first)
            break;
       */ 
          
      
    

   return sol;
        
    }
    
    
    

    
    int Binsearch(vector<int>& nums, int target)
    {
        cout<<"size:"<<nums.size()<<endl;
        return My_binSearch(nums,0,nums.size()-1,target);
    
    }
    
    
    
};


int main(){
    
    
    
    int arr[]={1,4,16,9,3,25,0,14};
    int size = sizeof(arr)/sizeof(int);
    vector<int> sum(arr,arr+size);
    int target = 13;
    vector<int>sol(2);
   
    Solution s;
   sol=   s.twoSum3(sum,target);
    
   
  
   
        //cout<<"solution:"<<endl;
       cout<<sol[0]<<","<<sol[1]<<endl;
    
         //cout<<"size:"<<sol.contains()<<endl;    
         /*
           vector<int>:: iterator k;
           for (k=sol.begin();k!=sol.end();k++)
               cout<<"d:"<<(*k)<<endl;
    */
    
    
 return 0;   
    
    
    
}