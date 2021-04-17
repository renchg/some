#include <stdbool.h>
#include <stdio.h>

int lengthOfLongestSubstring(char *s) {
  int i, j = 0, count = 0, max = 0, index[128] = {0}, start = 0;
  for (i = 0; s[i] != '\0'; i++) {
    if (index[s[i]] > start)  // index用来储存出现重复字符时
    {                         //子串起始下标应移动到的地方
      count = i - start;
      if (count > max) {
        max = count;
      }
      start = index[s[i]];
    }
    index[s[i]] = i + 1;
  }
  count = i - start;
  return count > max ? count : max;
}

int main(int argc, char **argv) {
  char s[] = "pwwkew";
  int len = 0;
  len = lengthOfLongestSubstring(s);
  printf("len = %d\n", len);
}

for (size_t i = 0; i < count; i++) {
  /* code */
}
