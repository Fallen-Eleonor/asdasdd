void mx_printchar(char c);

void mx_char_d(int n, char a, char b)
{
    for (int i = 0; i <= n; i++) {
        if (i == n) {
            mx_printchar(a); 
        }
        else {
            mx_printchar(b);
        }
    }
}

void mx_empty_space(int n, int *n1, int i)
{
    if (i == n-1)
        return;

    mx_char_d(*n1, '\\', ' ');
    *n1 += 2;
}

void mx_pyramid(int n)
{
    int n1 = 1;
    if (n <= 1 || (n % 2) != 0)
        return;
    for (int i = n-1; i >= 0; i--)
    {
        mx_char_d(i, '/', ' ');
        if (i == 0)
            mx_char_d(n1, '\\', '_');
        else {
            mx_empty_space(n, &n1, i);
        }
        ((n - 1) - i < n / 2) ? mx_char_d((n - 1) - i, '\\', ' ') : mx_char_d(i, '|', ' ');
        mx_printchar('\n');
    }
}



