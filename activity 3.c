#include <stdio.h>

#define TV_PRICE 400.00
#define VCR_PRICE 220.00
#define REMOTE_PRICE 35.20
#define CD_PRICE 300.00
#define TAPE_PRICE 150.00
#define TAX_RATE 0.0825

int main() {
    int qtyTV, qtyVCR, qtyRemote, qtyCD, qtyTape;
    double totalTV, totalVCR, totalRemote, totalCD, totalTape;
    double subtotal, tax, total;

    // Input
    printf("How Many TVs Were Sold? ");
    scanf("%d", &qtyTV);
    printf("How Many VCRs Were Sold? ");
    scanf("%d", &qtyVCR);
    printf("How Many Remote Controllers Were Sold? ");
    scanf("%d", &qtyRemote);
    printf("How Many CD Players Were Sold? ");
    scanf("%d", &qtyCD);
    printf("How Many Tape Recorders Were Sold? ");
    scanf("%d", &qtyTape);

    // Calculations
    totalTV = qtyTV * TV_PRICE;
    totalVCR = qtyVCR * VCR_PRICE;
    totalRemote = qtyRemote * REMOTE_PRICE;
    totalCD = qtyCD * CD_PRICE;
    totalTape = qtyTape * TAPE_PRICE;

    subtotal = totalTV + totalVCR + totalRemote + totalCD + totalTape;
    tax = subtotal * TAX_RATE;
    total = subtotal + tax;

    // Output formatted bill
    printf("\nQTY   DESCRIPTION        UNIT PRICE     TOTAL PRICE\n");
    printf("%-5d %-18s $%8.2f    $%8.2f\n", qtyTV, "TV", TV_PRICE, totalTV);
    printf("%-5d %-18s $%8.2f    $%8.2f\n", qtyVCR, "VCR", VCR_PRICE, totalVCR);
    printf("%-5d %-18s $%8.2f    $%8.2f\n", qtyRemote, "REMOTE CTRLR", REMOTE_PRICE, totalRemote);
    printf("%-5d %-18s $%8.2f    $%8.2f\n", qtyCD, "CD PLAYER", CD_PRICE, totalCD);
    printf("%-5d %-18s $%8.2f    $%8.2f\n", qtyTape, "TAPE RECORDER", TAPE_PRICE, totalTape);

    printf("\n%-25s              $%8.2f\n", "SUBTOTAL", subtotal);
    printf("%-25s              $%8.2f\n", "TAX", tax);
    printf("%-25s              $%8.2f\n", "TOTAL", total);

    return 0;
}
