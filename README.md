# BaitScope: Fişinq və Şübhəli Link Risk Analizatoru

**BaitScope** — C proqramlaşdırma dilində yazılmış, e-poçt, SMS və keçidlərdəki fişinq əlamətlərini analiz edən yüngül və sürətli risk qiymətləndirmə alətidir. Sistem daxil edilən mətndə sosial mühəndislik ifadələrini və şübhəli link əlamətlərini yoxlayaraq **0–100 arası** izahlı risk balı çıxarır.

## Əsas Xüsusiyyətlər
- **İzahlı Risk Qiymətləndirməsi (0–100):** Sadəcə xəbərdarlıq vermir, təhlükənin konkret səbəblərini göstərir.
- **Hibrid Analiz:** Həm manipulyativ ifadələri (tələskənlik, şifrə/hesab qorxusu, saxta hədiyyə vədləri), həm də şübhəli URL əlamətlərini (`http://`, qısaldılmış linklər, riskli domen sonluqları) yoxlayır.
- **Yüngül və Oflayn:** Standart C dilində (`stdio.h`, `string.h`) yazılıb, minimal resurs tələb edir və internet asılılığı olmadan işləyir.

## Kompilyasiya və İşə Salma
1. Proqramı GCC ilə kompilyasiya edin:
   ```bash
   gcc main.c -o baitscope
