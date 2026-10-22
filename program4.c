//final bill with membership discount

#include <stdio.h>

int main() {
    float amount, discount = 0, delivery = 0, total;
    int membership;

    printf("Enter order amount: ");
    scanf("%f", &amount);

    printf("Enter membership (1-Premium, 0-Regular): ");
    scanf("%d", &membership);

    if (amount < 0 || (membership != 0 && membership != 1)) {
        printf("Invalid input");
        return 0;
    }

    if (amount >= 500) {
        delivery = 0;

        if (membership == 1)
            discount = amount * 0.10;
    } else {
        delivery = 50;
    }

    total = amount - discount + delivery;

    printf("Discount = %.2f\n", discount);
    printf("Delivery charge = %.2f\n", delivery);
    printf("Final amount = %.2f\n", total);

    return 0;
}
