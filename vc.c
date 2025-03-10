#include <stdio.h>

int main() {
    int t; // Number of test cases
    scanf("%d", &t);
    
    while (t--) {
        int n; // Number of rows for this test case
        scanf("%d", &n);
        
        // Declare an array to store the columns where notes are located
        int columns[n];
        
        // Process the n rows
        for (int i = 0; i < n; i++) {
            char row[5]; // 4 columns + 1 for the null terminator
            scanf("%s", row);
            
            // Find the column where the '#' is located
            for (int j = 0; j < 4; j++) {
                if (row[j] == '#') {
                    columns[i] = j + 1; // Store the 1-based column index
                    break;
                }
            }
        }
        
        // Output the columns in reverse order (bottommost row first)
        for (int i = n - 1; i >= 0; i--) {
            printf("%d ", columns[i]);
        }
        printf("\n");
    }
    
    return 0;
}
