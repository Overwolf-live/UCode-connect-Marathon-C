int mx_sqrt(int x){
    if(x < 0)
        return 0;
    for (int i = 1; i <= x / 2; i++)
    {
        if( i * i == x) {
            return i;
        }
    }
    return 0;
}
