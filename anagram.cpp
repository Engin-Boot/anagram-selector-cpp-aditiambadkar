#include "anagram.h"
#include <string>
#include <bits/stdc++.h> 

bool Anagram::WordPairIsAnagram(const std::string& word1, const std::string& word2) {
    if(word1.length() != word2.length())
        return false;
    transform(word1.begin(), wordl.end(), wordl.begin(), ::tolower); 
    transform(wordl.begin(), wordl.end(), wordl.begin(), ::tolower); 
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());
    for(int i = 0; i < word1.length(); i++)
    {
        if(word1[i] != word2[i])
            return false;
    }
    return true;
}

std::vector<std::string> Anagram::SelectAnagrams(
        const std::string& word,
        const std::vector<std::string>& candidates) {
    //Fill the correct implementation here
    return candidates;
}
