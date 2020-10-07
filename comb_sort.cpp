int getNextGap(int g)
{  
    g = (g*10)/13;
    if (g < 1)
        return 1;
    return g;
}

void combSort(int a[], int n)
{

    int g = n;
    bool swapped = true;
    while (g!= 1 || swapped == true)
    {
        g = getNextGap(g);
        swapped = false;
        for (int i=0; i<n-g; i++)
        {
            if (a[i] > a[i+g])
            {
                swap(a[i], a[i+g]);
                swapped = true;
            }
        }
    }
}

int main()
{
    int a[] = {13, 43, 1, 58, 3, -46, 23, -8, 32, 10};
    int n = sizeof(a)/sizeof(a[0]);
    combSort(a, n);
    printf("Sorted array: \n");
    for (int i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;
}
