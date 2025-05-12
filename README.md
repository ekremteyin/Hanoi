# 🗼 Hanoi Kuleleri Problemi (C)

Bu proje, klasik bir algoritma sorusu olan **Hanoi Kuleleri Problemi**nin C programlama dili ile çözümünü içermektedir. Kullanıcıdan alınan disk sayısına göre, disklerin minimum adımda nasıl taşınacağı ekrana yazdırılır ve çözüm süresi hesaplanır.

---

## 🧠 Problem Tanımı

Hanoi Kuleleri problemi 3 çubuk ve N diskten oluşur. Diskler başlangıçta bir çubuğa sıralı (büyük altta, küçük üstte) dizilmiştir. Amaç, bazı kurallar dahilinde tüm diskleri başka bir çubuğa taşımaktır:

- Aynı anda yalnızca bir disk taşınabilir.
- Hiçbir disk, kendinden küçük bir diskin üzerine konulamaz.

---

## 🚀 Özellikler

- 📥 Kullanıcıdan disk sayısı alır.
- 🔁 Rekürsif çözüm algoritması içerir.
- 🕒 Çözüm süresini `clock()` fonksiyonu ile ölçer.
- 🧾 Tüm adımları ekrana yazdırır.

---

## 🛠️ Kullanılan Teknolojiler

| Teknoloji | Açıklama            |
|----------|---------------------|
| C        | Programlama dili    |
| GCC      | Derleyici (önerilen) |
| Code::Blocks | Proje dosyası mevcuttur (`.cbp`) |

---

## ⚙️ Derleme ve Çalıştırma

### GCC ile:

```bash
gcc main.c -o hanoi
./hanoi
