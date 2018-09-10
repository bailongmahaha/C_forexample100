# include <stdio.h>

void main()
{
      unsigned a, b, c, d;
      int n;
      
      a = 64;
      n = 2;
      
      /* 将操作数a右移(6-n)位 */
      b = a >> (6-n);
      printf("b = %d\n", c);
      
      /* 对操作数a进行的混合位运算 */
      d = (a >> (n-1)) | (a << (n+1));
      printf("d = %d\n", d);
      
}
