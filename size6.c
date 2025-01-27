#include <stdio.h>

void sortDescending(int arr[], int size) {
    // 降順ソート（選択ソートを使用）
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        // 最大値を現在の位置と交換
        if (i != maxIndex) {
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}

int main() {
    const int SIZE = 5; // 配列のサイズを変更
    int scores[SIZE] = {0, 60, 70, 100, 90}; // 元の配列

    // 元の配列を表示
    printf("scores =");
    for (int i = 0; i < SIZE; i++) {
        printf(" %d", scores[i]);
    }
    printf("\n");

    // 配列を直接並び替える
    sortDescending(scores, SIZE);

    // 並び替えた結果を表示
    printf("results =");
    for (int i = 0; i < SIZE; i++) {
        printf(" %d", scores[i]);
    }
    printf("\n");

    return 0;
}
