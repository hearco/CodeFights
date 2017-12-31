std::vector<std::vector<int>> rotateImage(std::vector<std::vector<int>> a) {
    int temp;
    for (int i = 0; i < a.size()/2; i++){
        for (int j = i; j < a[i].size() - 1 - i; j++){
            temp = a[i][j];
            swap(temp, a[j][a[i].size() - 1 - i]);
            swap(temp, a[a.size() - 1 - i][a[i].size() - 1 - j]);
            swap(temp, a[a[i].size() - 1 - j][i]);
            swap(temp, a[i][j]);
        }
    }
    
    return a;
}

void swap(int &a, int &b){
    if (&a != &b){
        a ^= b;
        b ^= a;
        a ^= b;
    }
}
