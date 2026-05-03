class Solution {
public:
    bool isAnagram(string s, string t) {

        if ( s.length() != t.length() ){
            return false ; 
        }
        unordered_map<char , int> freqS ; 
        unordered_map<char , int> freqT ; 

        for ( int i = 0 ; i < s.size() ; i++ ){
            freqS[s[i]]++ ; 
            freqT[t[i]]++ ; 
        }

        // for ( int i = 0 ; i < s.size() ; i++ ){
        //     char ch = s[i] ; 

        //     if ( freqS[ch] != freqT[ch] ){
        //         return false ;
        //     }
        // }
        return freqS == freqT ; 


    }
};
