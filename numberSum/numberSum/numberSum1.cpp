#include <iostream>
using namespace std;
int* twoSum(int* nums,int numsSize,int target);
void main()
{
	int nums[]={2,7,11,15};
	int target=9,numsSize=4;
	/*cout<<"输入10个数"<<endl;
	for(int i=0;i<5;i++)
		cin>>nums[i];
	numsSize=sizeof(nums)/sizeof(nums[0]);
	cout<<"输入求和目标"<<endl;
	cin>>target;*/
	int* result=twoSum(nums,numsSize,target);
	//for(int i=0;i<4;i++)
	//cout<<result<<endl;
	system("pause");
}
int* twoSum(int* nums,int numsSize,int target)
{
	int i,j;
	int *result=NULL;
	for(i=0;i<=numsSize-1;i++)
	{
	for(j=i+1;j<numsSize-1;j++)
	{
	   if(nums[i]+nums[j]==target)
	   {
	   result=(int*)malloc(sizeof(int)*2);
	   result[0]=i;
	   cout<<result[0]<<endl;
	   result[1]=j;
	   cout<<result[1]<<endl;
	   return result;
	   }
	}
	}
}