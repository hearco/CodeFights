char firstNotRepeatingCharacter(std::string s) {    
    std::unordered_map<char, int> hashTable;
    char result = '_';
    
    for (int i = 0; i < s.length(); i++){
        if (hashTable.find(s[i]) != hashTable.end())
            hashTable.find(s[i])->second++;
        
        else
            hashTable.insert( std::pair<char,int>(s[i], 1) );               
    }
    

    for (int i = 0; i < s.length(); i++){
        if (hashTable.find(s[i])->second == 1)
            return hashTable.find(s[i])->first;
    }
    return result;
   
}
