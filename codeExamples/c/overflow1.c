void function(int a, int b, int c)
{
    char buffer1[5];
    char buffer2[10];
    int *ret;

    ret = buffer1 + 12;
    // < ----Possible reason #1 : Distance from buffer1 to ret(*ret) += 8;
    // < ------Possible reason #2 : Number added to ret address
}

void main()
{
    int x;

    x = 0;
    function(1, 2, 3);
    x = 1;
    printf("%d\n", x);
}