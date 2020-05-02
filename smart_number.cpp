#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p = (int*)malloc(sizeof(int));

    p = NULL;

    free(p);
}
