# k-way-merge-assignment
# K-Way Merge and Pairwise Merge

## Problem Statement

A financial system receives three already sorted transaction lists:

L1 = 10, 30, 50, 70

L2 = 20, 40, 60, 80

L3 = 15, 35, 55, 75

The objective is to merge the sorted lists using:

1. K-Way Merge using Min Heap
2. Pairwise Merge

and compare their performance.

---

## Files Included

- k_way_merge.c
- pairwise_merge.c

---

## Execution Results

### K-Way Merge
Initial Heap:
10 20 15

After 10 is removed:
15 20 30

After 15 is removed:
20 30 35

After 20 is removed:
30 35 40

After 30 is removed:
35 40 50

After 35 is removed:
40 50 55

After 40 is removed:
50 55 60

After 50 is removed:
55 60 70

After 55 is removed:
60 70 75

After 60 is removed:
70 75 80

Output:
10 15 20 30 35 40 50 55 60 70 75 80

Comparisons: 21

### Pairwise Merge
Merge L1 and L2
L1 = 10 30 50 70
L2 = 20 40 60 80

Result
10 20 30 40 50 60 70 80

Merge the result with L3
10 20 30 40 50 60 70 80
15 35 55 75

Output:
10 15 20 30 35 40 50 55 60 70 75 80

Comparisons: 18

## Complexity Analysis

| Method | Time Complexity | Space Complexity |
|----------|----------|----------|
| K-Way Merge | O(n log k) | O(k) |
| Pairwise Merge | O(nk) | O(n) |

## Comparison Table
| Parameter             | K-Way Merge using Min Heap | Pairwise Merge   |
| --------------------- | -------------------------- | ---------------- |
| Number of lists       | 3                          | 3                |
| Total elements        | 12                         | 12               |
| Heap size             | 3                          | Not applicable   |
| Number of comparisons | **21**                     | **18**           |
| Time complexity       | **O(N log K)**             | **O(NK)**        |
| Space complexity      | **O(K)**                   | **O(N)**         |
| Intermediate array    | Not required for merging   | Required         |
| Final output          | Same sorted list           | Same sorted list |

## Conclusion
Both the K-way merge using Min Heap and pairwise merging successfully merge the three sorted lists into a single sorted list:

10 15 20 30 35 40 50 55 60 70 75 80
For the given input, the K-way Min Heap approach requires 21 comparisons, whereas the pairwise approach requires 18 comparisons.

The K-way Min Heap method has a time complexity of O(N log K) and space complexity of O(K). The simple pairwise method has a time complexity of O(NK) for sequential merging and requires O(N) additional space for intermediate results.

Therefore, when the number of sorted files increases, the K-way merge using a Min Heap is more scalable because the heap efficiently maintains the smallest current element from each sorted file.

