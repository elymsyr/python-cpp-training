sayi = int(input("Lütfen bir sayı giriniz. \n"))
basamak = len(str(sayi))
basamak = int(basamak)
print("{} basamaklı...".format(basamak))
b = 10
c = 1
d = 0
while (sayi>0):
    a = sayi % b
    print(int(a/c))
    sayi = sayi - a
    b *= 10
    c *= 10
    d += 1
