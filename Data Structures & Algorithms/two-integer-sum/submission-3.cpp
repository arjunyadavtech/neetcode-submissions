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

        // // sort and taverse it form opposite ends 
        // vector <int> sortedNums = nums ; 
        // sort( sortedNums.begin() , sortedNums.end() ) ; 

        // int start = 0 , end = nums.size()-1 ; 
        // while ( start < end ){
        //     int currSum = sortedNums[start] + sortedNums[end]  ; 
        //     if ( currSum == target  ){
        //         return 
        //     }
        //     else if ( currSum > target ){
        //         end-- ; 
        //     }
        //     else{ 
        //         start++ ;
        //     }
        // }
        // return {} ; 

        // hashamp  S.C --> 0(n) and T.C --> 0(n)
        unordered_map<int , int > indexMap ; 
        for ( int i = 0 ; i < nums.size() ; i++ ){
            indexMap[nums[i]] = i ; 
        }
        
        for ( int i = 0 ; i < nums.size()-1 ; i++ ){
            int compliment = target - nums[i] ; 
            if ( indexMap.find(compliment) != indexMap.end()  && indexMap[compliment] != i ){
                return { i  , indexMap[compliment]}  ; 
            }
        }
        return {}  ; // no solution find ; 

    }
};
