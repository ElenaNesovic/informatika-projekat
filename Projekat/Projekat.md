# Kreiranje koder-dekoder mehanizma za sakrivanje poruke sa većim brojem karaktera (KDMSP)

## Uvod
  Cilj ovog projekta bio je kreiranje dva programa, gde bi jedan kodirao određenu šifru, a drugi dekodirao istu. Kodiranje 
predstavlja suprotnu operaciju od dekodiranja i označava postupak jednoznačnog pridruživanja skupa karaktera odgovarajućem nizu 
karaktera. Dok se u koderu unose karakteri koji treba da se sakriju, u dekoderu se unose oni karakteri koji su rezultat kodera. 
Zadatak dekodera je da uz pomoć odgovarajućeg skupa poznatih podataka samo njemu dođe do odgovarajućih karaktera koji će biti 
identični onim koji su uneti u koder. U ovom projektu kao karakteri posmatrane su cifre od 1 do 9, koje su uz pomoć kodera i dekodera
sakrivene metodom koja je objašnjena ispod.
## Opis projekta
Na početku se unosi broj n a potom i n cifara od 1 do 9 sa razmakom. Zatim se svaka od n cifara pretvori u četvorobitni binarni broj. Dekodiranje se vrši pomoću kocke
čija je slika zadata ispod. Neka 1 odgovara rotaciji kocke naviše, a 0 rotaciji kocke udesno. Odnosno, kada se svaka od unetih cifara pretvori u binarni broj, svaki od
bitova rotira kocku udesno ili naviše. Svaki put kada se kocka zarotira, trenutna boja na kocki pamti se u niz boja. Zatim se svakoj boji na sledeći način pridruži jedan 
trobitni binarni broj:


 BELA (W) --- 000
 
 
PLAVA (B) --- 001


NARANDŽASTA (O) --- 010


CRVENA (R) --- 011


ŽUTA (Y) --- 100


ZELENA (G) --- 101


Nakon toga se novodobijeni niz nula i jedinica obrne. Tako dobijeni niz predstavlja odgovarajuću šifru.
Dekoder unosi broj cifara ove šifre i datu šifru. On obrće ovaj niz, dodeljuje svakom trobitnom binarnom broju jednu boju, a zatim "odrotira" kocku pamteći korake. Koraci se zatim preslikaju u niz brojeva koji su bili uneti na samom početku.
Što se tiče implementacije, rađeno je u programskom jeziku C.

![Screenshot (189)](https://user-images.githubusercontent.com/68563777/121240257-68944b80-c89a-11eb-9501-f9774032e93c.png)
### Primer
U nastavku dat je primer koj ilustruje po kom principu radi koder.
ULAZ

5


4 3 2 9 1


Svaki od ovih brojeva se pretvori u binarni, pa se tako dobija sledeći niz:


0100|0011|0010|1001|0001


Zatim, posmatra se rotacija kocke i trenutna boja, pa novi niz izgleda ovako:


BOYRWOGRYOBWRGOYBWGR


Svakoj od boja pripiše se jedan trobitni broj:


001|010|100|011|000|010|101|011|100|010|001|000|011|101|010|100|001|000|101|011|

## Zaključak
