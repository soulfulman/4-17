#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//判断是否旋转字符串法二
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//		int len2 = strlen(str2);
//		if (len1 != len2);
//		return 0;
//		strncat(str1, str1, 6);
//		char* ret = strstr(str1 ,str2);
//		if (ret = NULL)
//		{
//			return 0;
//		}
//		else
//		{
//			return 1;
//		}
//}
//int mian()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret = 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}
////找出杨氏三角里的一个数
//int findnum(int arr[3][3], int k, int *px, int *py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px - 1 && y>=0)
//	{
//		if (arr[x][y] < k)
//		{
//			y--;
//		}
//			
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3} ,{4,5,6}, {7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = findnum(arr, k, &x, &y);//返回型参数
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("坐标是：\n", &x, &y);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}
//int my_strlen(const char* str)
//{
//	int count = 0;
//		while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//		return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
////size_t=unsigned int
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	asssert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest 的空间
//	while (*dest = *src)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//
//{
//	char  arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	return 0;
//}
////strcat
//char* strcat(char* dest, char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest! = '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	return 0;
//}
//strcmp
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == "\0")
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char* p1 = "hjklabcdef";
//	char* p2= "qwert";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}
//strncat
char* my_strncat( char* dest, char* src, int count)

{
	char* ret =dest;
	while (*dest++)
	{
		;
		dest--;
	}
		
	while (count--)
		if (!(*dest++ = *src++))
		return(ret);
	*dest = '\0';
	return(ret);
	
}
int main()
{
	char p1[30] = "hello";
	char p2[30]= "world";
	strncat(p1, p2, 2);
	printf("%s\n", p1);
	return 0;
}