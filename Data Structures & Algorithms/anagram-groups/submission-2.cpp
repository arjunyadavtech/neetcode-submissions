class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        //sorting and hashmap 
        // T.C : O(m*nlogn) and S.C O(m*n)
        // vector<vector<string>> ans ; 

        // if ( strs.size() <= 1){
        //     ans.push_back(strs) ; 
        //     return ans ; 
        // }
        // unordered_map<string , vector<string> > map ; 

        // for ( int i = 0 ; i < strs.size() ; i++ ){
        //     string copy = strs[i] ; 
        //     sort(copy.begin() , copy.end() ) ;
        //     map[copy].push_back(strs[i]) ; 
        // }

        // for ( const auto &pair : map ){ ; 
        //     ans.push_back( pair.second ) ; 
        // }
        // return ans ; 

        /// hash map and freq to tuple method 


        unordered_map<string , vector<string>>  res; 
        for ( const auto&s : strs ){
            vector<int> count(26 , 0) ; 
            for ( char ch : s ){
                count[ch-'a']++ ; 
            }

            string key = to_string( count[0]) ; 
            for ( int i = 1 ; i < 26 ; ++i){
                key += ',' + to_string(count[i]) ; 
            }
            res[key].push_back(s) ; 
        }

        vector<vector<string>> result ; 
        for ( const auto& pair : res ){
            result.push_back( pair.second ) ; 
        }

        return result  ; 
    }
};
