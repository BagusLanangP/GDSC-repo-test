#include <stdio.h>

int main() {
  float num1, num2;
  char operator;

  printf("Masukkan dua angka dan operator (+, -, *, /): ");
  scanf("%f %c %f", &num1, &operator, &num2);

  switch (operator) {
    case '+':
      printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
      break;
    default:
      printf("Operator tidak valid.\n");
  }

  return 0;
}
