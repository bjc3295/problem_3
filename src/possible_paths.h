long possiblePathsRecursive(int M, int N) {
    if (M==0 || N==0) {
        return 0;
    }

    if (M+N==2) {
        return 1;
    }

    return possiblePathsRecursive(M-1, N) + possiblePathsRecursive(M, N-1);
}

long possiblePathsIterative(int M, int N) {
    // homework
    // handle 0's
    if (M == 0 || N == 0) {
        return 0;
    }

    long arr[M * N];

    // traverse array, inputting values
    for (int i = 0; i < M * N; i++) {

        // inputs 1 for first row and column
        if (i / N == 0 || i % N == 0) {
            arr[i] = 1;
        }

        // uses left and up values to calculate
        else {
            arr[i] = arr[i - 1] + arr[i - N];
        }
    }
    return arr[M * N - 1];
}