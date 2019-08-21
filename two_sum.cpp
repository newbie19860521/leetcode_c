#include <iostream>

//leetcode two sum
//intput:[2,7,11,15]
//target:9

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int i, j;
	int* result = (int *)malloc(sizeof(int) * 2);

	*returnSize = 2;
	for (i = 0; i < numsSize; i++)
	{
		for (j = i + 1; j < numsSize; j++)
		{
			if (target == nums[i] + nums[j])
			{
				result[0] = i;
				result[1] = j;
			}
		}
	}
	return result;
}

void main()
{
	int a[4] = { 2,7,11,15 };
	int size = 4;
	int target = 9;
	int returnSize = 0;
	int *result;
	int i;

	result = twoSum(a, size, target, &returnSize);

	printf("returnSize = %d\n", returnSize);
	for (i = 0; i < returnSize; i++)
	{
		printf("result[%d] = %d\n", i, result[i]);
	}

}
