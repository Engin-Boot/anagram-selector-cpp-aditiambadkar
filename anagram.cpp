#include "anagram.h"
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

bool Anagram::WordPairIsAnagram(const std::string& word1, const std::string& word2) {
    
    string word1Copy = word1;
    string word2Copy = word2;
    
    word1Copy.erase(remove(word1Copy.begin(), word1Copy.end(), ' '), word1Copy.end());
    word2Copy.erase(remove(word2Copy.begin(), word2Copy.end(), ' '), word2Copy.end());
    
    if(word1Copy.length() != word2Copy.length())
        return false;
    
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
    vector<string> selectedAnagrams = {};
    for(int i = 0; (unsigned)i < candidates.size(); i++)
    {
        if(WordPairIsAnagram(word, candidates[i]))
        {
            selectedAnagrams.push_back(candidates[i]);
        }
    }
    return selectedAnagrams;
}
