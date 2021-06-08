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
bitova rotira kocku udesno ili naviše. Savki put kada se kocka zarotira, 
![Screenshot (189)](https://user-images.githubusercontent.com/68563777/121240257-68944b80-c89a-11eb-9501-f9774032e93c.png)

## Zaključak
