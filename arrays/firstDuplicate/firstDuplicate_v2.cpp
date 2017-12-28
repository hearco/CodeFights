// This version does not belong to me and is taken from thienbui user.

int firstDuplicate(std::vector<int> a) {
    for(int i=0; i < a.size(); i++){
        int t = abs(a[i]);
        if(a[t - 1] < 0)
            return t;
        a[t - 1] = - a[t - 1];
    }
    return -1;
}
