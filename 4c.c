#include <stdio.h>
int main() {
    int n, m, i, j;
    printf("Enter the number of movies: ");
    scanf("%d", &n);
    printf("Enter the number of viewers: ");
    scanf("%d", &m);
    int ratings[n][m];
    printf("\nEnter the ratings for each movie from each viewer (1 to 10):\n");
    for (i = 0; i < n; i++) {
        printf("\nRatings for Movie %d:\n", i + 1);
        for (j = 0; j < m; j++) {
            printf("Viewer %d: ", j + 1);
            scanf("%d", &ratings[i][j]);
        }
    }
    float average[n];
    float maxAvg = -1, minAvg = 11;  // Initialize to extreme values
    int bestMovieIndex = -1, worstMovieIndex = -1;
    for (i = 0; i < n; i++) {
        int sum = 0;
        for (j = 0; j < m; j++) {
            sum += ratings[i][j];
        }
        average[i] = (float)sum / m;
        printf("\nAverage Rating for Movie %d: %.2f\n", i + 1, average[i]);
        if (average[i] > maxAvg) {
            maxAvg = average[i];
            bestMovieIndex = i;
        }
        if (average[i] < minAvg) {
            minAvg = average[i];
            worstMovieIndex = i;
        }
    }
    printf("\nBest Movie based on rating: Movie %d with average rating %.2f\n", bestMovieIndex + 1, maxAvg);
    printf("Worst Movie based on rating: Movie %d with average rating %.2f\n", worstMovieIndex + 1, minAvg);
    return 0;
}
