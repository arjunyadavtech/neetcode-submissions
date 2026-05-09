class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // // Boootstarap approach -- s.c o(1) , T.C - O(n^2)
        // if ( nums.size() == 0 ){
        //     return {} ; 
        // }
        // for ( int i = 0 ; i < nums.size()-1 ; i++ ){
        //     for ( int j = i+ 1 ; j < nums.size() ; j++ ){
        //         if ( nums[i] + nums[j] == target ){
        //             return {i,j} ; 
        //         }
        //     }
        // }
        // return {} ; 

        // hashamp 
        unordered_map<int , int > indexMap ; 
        for ( int i = 0 ; i < nums.size() ; i++ ){
            indexMap[nums[i]] = i ; 
        }
        
        for ( int i = 0 ; i < nums.size()-1 ; i++ ){
            int compliment = target - nums[i] ; 
            if ( indexMap.count(compliment)  && indexMap[compliment] != i ){
                return { i  , indexMap[compliment]}  ; 
            }
        }
        return {} ; 
    }
};
