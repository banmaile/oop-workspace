int median_array(int array[], int n) {
    // Check the size parameter
    if (n < 1 || n % 2 == 0) {
        return 0;
    }

    // use for-loop
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (array[j] > array[j + 1]) {
                int temp = 0;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    
    // Calculate the median
    int medianIndex = n / 2;
    return array[medianIndex];
}