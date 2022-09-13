void mx_printchar(char c);

void mx_tir(int n, char a, char b) {
    for (int i = 0; i <= n; i++) {
        if (i == n || i == 0) {
            mx_printchar(a);
        }
        else {
            mx_printchar(b); 
        }
    }
}

void mx_sd(int n, char a, char b) {
    for (int i = 0; i <= n; i++)
        if (i == n) {
            mx_printchar(a);
        }
        else {
            mx_printchar(b);
        }
}

void mx_top(int n) {
    for (int i = ((n / 2)+ 1); i > 0; i--)
    {
        for (int j = 0; j < i; j++) {
            mx_printchar(' ');
        }
        if (i == ((n / 2) + 1)) {
            mx_tir((n * 2) + 1, '+', '-');
        }
        else {
            mx_tir(((n * 2) + 1), '/', ' ');
            mx_sd((n / 2) - i, '|', ' ');
        }
        mx_printchar('\n');
    }
}

void mx_cube(int n)
{
    if (n <= 1)
        return;
    mx_top(n);
    for (int i = (n + 1); i >= 0; i--)
    {
        i == 0 || i == (n + 1) ? mx_tir((n * 2) + 1, '+', '-') : mx_tir((n * 2) + 1, '|', ' ');
        if (i == ((n / 2) + 1))
            mx_sd((n / 2), '+', ' ');    
        else {
        i <= (n / 2) ? mx_sd(i - 1, '/', ' ') : mx_sd(n / 2, '|', ' ');
        }
        mx_printchar('\n');
    }
}

