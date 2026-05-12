class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans ; 

        if ( strs.size() <= 1){
            ans.push_back(strs) ; 
            return ans ; 
        }

        unordered_map<string , vector<string> > map ; 

        for ( int i = 0 ; i < strs.size() ; i++ ){
            string copy = strs[i] ; 
            sort(copy.begin() , copy.end() ) ;
            map[copy].push_back(strs[i]) ; 
        }

        for ( const auto &pair : map ){ ; 
            ans.push_back( pair.second ) ; 
        }

        return ans ; 
    }
};
