int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *result = malloc(2 * sizeof(int));

    for(int i=0; i<numsSize; i++){
        for(int j=1; j<numsSize; j++){
            if(i == j) continue;
            if ((nums[i] + nums[j]) == target) {
                printf("Output: [%d, %d]", nums[i], nums[j]);
                result[0] = i;
                result[1] = j;

                *returnSize = 2;
                return result;
                }   
        }   
    }
    *returnSize = 0;
    return NULL;
}
