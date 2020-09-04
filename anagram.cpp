#include "anagram.h"
#include <string>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

bool Anagram::WordPairIsAnagram(const std::string& word1, const std::string& word2) {
    if(word1.length() != word2.length())
        return false;
    
    string word1Copy = word1;
    string word2Copy = word2;
    
    word1Copy.erase(remove_if(word1Copy.begin(), word1Copy.end(), isspace), word1Copy.end());
    word2Copy.erase(remove_if(word2Copy.begin(), word2Copy.end(), isspace), word2Copy.end());
    
    transform(word1Copy.begin(), word1Copy.end(), word1Copy.begin(), ::tolower); 
    transform(word2Copy.begin(), word2Copy.end(), word2Copy.begin(), ::tolower); 
    
    sort(word1Copy.begin(), word1Copy.end());
    sort(word2Copy.begin(), word2Copy.end());
    
    if(word1Copy.compare(word2Copy) == 0)
        return true;
    
    return false;
}

std::vector<std::string> Anagram::SelectAnagrams(
        const std::string& word,
        const std::vector<std::string>& candidates) {
    //Fill the correct implementation here
    return candidates;
}
