void mx_printchar(char c);

void mx_printstr(const char *s);

void mx_printint(int n);

int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char *argv[])
{   
    if(argc > 1)
    {
        int x, y, i;
        for (x = 0; x < argc; x++) 
        {
            for (y = x + 1; y < argc; y++)
            {
                if ((mx_strcmp(argv[x], argv[y])) > 0) 
                {
                    char *tmp = argv[x];
                    argv[x] = argv[y];
                    argv[y] = tmp;
                }
            }
        }

        for (i = 1; i < argc;i++)
        {
            mx_printstr(argv[i]);
            mx_printchar('\n');
        }
    }
    return 0;
}
