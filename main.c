#include <stdio.h>
#include <string.h>

int main() {
    char mesaj[1000];
    int bal = 0;

    printf("=== BaitScope - Fisinq Yoxlama Aleti ===\n");
    printf("Mesaji veya linki yazin:\n");

 
    fgets(mesaj, sizeof(mesaj), stdin);
    printf("\nTapilan sebebler:\n");

    if (strstr(mesaj, "tecili") != NULL || strstr(mesaj, "urgent") != NULL || strstr(mesaj, "derhal") != NULL) {
        bal = bal + 20;
        printf("- Teleskenlik yaradan soz var (+20)\n");
    }


    if (strstr(mesaj, "bloklanacaq") != NULL || strstr(mesaj, "sifre") != NULL || strstr(mesaj, "password") != NULL || strstr(mesaj, "kod") != NULL) {
        bal = bal + 25;
        printf("- Hesab veya sifre ile bagli subheli soz var (+25)\n");
    }

   
    if (strstr(mesaj, "qazandiniz") != NULL || strstr(mesaj, "hediyye") != NULL || strstr(mesaj, "pulsuz") != NULL || strstr(mesaj, "free") != NULL) {
        bal = bal + 20;
        printf("- Saxta hediyye veya uduş vedi ola biler (+20)\n");
    }


    if (strstr(mesaj, "http://") != NULL) {
        bal = bal + 15;
        printf("- HTTPS olmayan http:// linki var (+15)\n");
    }

    if (strstr(mesaj, "bit.ly") != NULL || strstr(mesaj, "tinyurl") != NULL) {
        bal = bal + 20;
        printf("- Qisaldilmis link istifade olunub (+20)\n");
    }

  
    if (strstr(mesaj, ".xyz") != NULL || strstr(mesaj, ".top") != NULL || strstr(mesaj, ".tk") != NULL) {
        bal = bal + 20;
        printf("- Subheli domen sonlugu (.xyz, .top, .tk) var (+20)\n");
    }

 
    if (bal > 100) {
        bal = 100;
    }

    printf("\nUmumi risk bali: %d / 100\n", bal);

    if (bal >= 60) {
        printf("Netice: YUKSEK RISK (Fisinq ola biler)\n");
    } else if (bal >= 25) {
        printf("Netice: ORTA RISK (Diqqetli olun)\n");
    } else {
        printf("Netice: ASAGI RISK\n");
    }

    return 0;
}
