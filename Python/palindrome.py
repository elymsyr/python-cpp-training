print("PALINDROME SAYI BULUCU\nmadebyOrhun")
sayi = int(input("\nLütfen sayınızı giriniz. \n"))
basamak = len(str(sayi))
basamak = int(basamak)
siras = basamak
sira = 1
print("\n{} basamaklı...\n".format(basamak))
while (basamak>1):
    ilk = sayi % 10
    ic = sayi % 10**(basamak-1)
    sonsayi = (sayi - ic)
    sayi = (ic - ilk) / 10
    son = sonsayi / (10**(basamak-1))
    print("{}. basamak: {}".format(sira, ilk))
    print("{}. basamak: {}\n".format(siras, son))
    basamak = basamak - 2
    sira += 1
    siras -= 1
    if (ilk != son):
        print("Maalesef sayınız palindrome değil :(")
if (ilk ==  son):
    print("Evet, evet sayınız palindrome :)")

