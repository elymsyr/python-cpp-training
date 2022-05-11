giris = str(input("Lütfen öncelikle üye olunuz.\nKaydolmak için 'kaydol' yazabilirsiniz...\n"))
while (giris == "kaydol"):
    ad = str(input("Kullanıcı adı belirleyiniz.\n"))
    sifre = str(input("Lütfen bir şifre oluşturunuz.\n(En az 8 haneli olmalıdır!)\n"))
    uzunluk = len(sifre)
    while (uzunluk<8):
        sifre = str(input("Lütfen en az 8 HANELİ bir şifre oluşturunuz.\n"))
        uzunluk = len(sifre)
    if (uzunluk>7):
        print("Profiliniz başarı ile oluşturulmuştur.\n")
        giris = str(input("Giriş yapmak için 'ac' , kayıt olmak için 'kaydol' yazınız.\n"))
        break
while (giris == "ac"):
    adal = str(input("Kullanıcı adı: "))
    sifreal = str(input("Şifre: "))
    if (adal == ad and sifreal == sifre):
        print("Başarıyla oturum açtınız...\n")
        giris = str(input("Giriş yapmak için 'ac' , kayıt olmak için 'kaydol' yazınız.\n"))
        break
    while not (adal == ad or sifreal == sifre):
        print("Yanlış bilgi girdiniz lütfen tekrar deneyiniz.")




