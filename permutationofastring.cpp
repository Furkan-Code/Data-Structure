#include <iostream>
using namespace std;
void perm(char s[], int k)
{
  static int A[20] = {0};
    static char res[20];
    if (s[k] == '\0')
    {
        res[k] = '\0';
        
        printf("%s", res);
        printf("\n");
    }
    else
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (A[i] == 0)
            {
                res[k] = s[i]; //changes
                A[i] = 1;
                perm(s, k + 1);
                A[i] = 0;
            }
        }
    }
  
}
int main() {
  char s[] ="ABC";
  perm(s,0);

  return 0;
}
