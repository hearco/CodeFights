int firstDuplicate(std::vector<int> a) {
    int value = -1;
    int *arr = new int[a.size() + 1];
    for (int i = 0; i < a.size(); i++){
       if (arr[a[i]] != 0 && arr[a[i]] != 1 && arr[a[i]] != 2)
           arr[a[i]] = 0;
        
        else
            arr[a[i]]++;
        
        if (arr[a[i]] > 1)
            return a[i];
    }
    return value;
}
