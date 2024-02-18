// Math Game.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    
    srand(time(0));
    int point = 0;
    int numberOfQuestions = 20;
    cout << "Welcome to Simple Math Game!" << endl;
    for (int i = 1; i <= numberOfQuestions; i++) {

        int num1 = rand() % 10 + 1;
        int num2 = rand() % 10 + 1;
        cout << "Questions " << i << ": " << num1 << " + " << num2 << " = ";
        int answer;
        cin >> answer;
        if (answer == num1 + num2) {

            cout << "Correct answer!" << endl;
            point += 10;

        }else {

            cout << "Wrong answer! Correct answer: "<< num1 + num2 << endl;

        }

    }

    cout << "GAME OVER!" << endl;
    cout << "Your total score: " << point << endl;
    return 0;

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
