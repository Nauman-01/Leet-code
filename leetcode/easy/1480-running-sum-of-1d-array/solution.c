/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    // 1. Set the size of the returned array
    *returnSize = numsSize;
    
    // 2. Allocate memory for the new array
    int* result = (int*)malloc(numsSize * sizeof(int));
    if (result == NULL) {
        return NULL;
    }
    
    // 3. The first element is the same as the input array
    result[0] = nums[0];
    
    // 4. Each subsequent element is the previous running sum plus the current number
    for (int i = 1; i < numsSize; i++) {
        result[i] = result[i - 1] + nums[i];
    }
    
    return result;
}
