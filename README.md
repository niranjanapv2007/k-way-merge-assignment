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

Output:
10 15 20 30 35 40 50 55 60 70 75 80

Comparisons: 21

### Pairwise Merge

Output:
10 15 20 30 35 40 50 55 60 70 75 80

Comparisons: 18

---

## Complexity Analysis

| Method | Time Complexity | Space Complexity |
|----------|----------|----------|
| K-Way Merge | O(n log k) | O(k) |
| Pairwise Merge | O(nk) | O(n) |

---

## Conclusion

For the given input, Pairwise Merge required fewer comparisons. However, K-Way Merge has better scalability and becomes more efficient when the number of sorted files increases. Therefore, K-Way Merge is more suitable for large datasets.
