//Задача №10:Удалить из строки первые буквы слов. (Пример. Входная строка: Crystal Method. Результат: rystal ethod).
#include <iostream>
#include <string>

int main(){
    int i = 0;
    std::string text;
    std::getline(std::cin, text);
    text.erase(0,1);
    while( i<text.length()){
        if(text.at(i) == ' '){
            text.erase(i+1, 1);
            i++;

        }
        i++;
    }
    std::cout<<text<<'\n';
    return 0;
}

//Задача №1:Составить алгоритм, находящий, сколько раз в тексте сочетание “ум” встречается не в начале слова.
#include <iostream>
#include <string>
int main(){
    std::string txt;
    std::getline(std::cin, txt);
    int i = 0,
    count = 0,
    point = 0;
    while (i<txt.length()){
        if(txt.at(i) == ' '){
            count = 0;
        }
        if ( txt.at(i)=='y' && txt.at(i+1)=='m' && count > 1){ // "ум" записано на английском - "ym"
            point++;
        }
        count++;
        i++;
    }
    std::cout<<"points:"<<point;
}

//Задача №14:Дана строка. Если она начинается на 'abc', то заменить их на 'www', иначе добавить в конец строки 'zzz'.
#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);
    if (s.size() >= 3 && s.substr(0, 3) == "abc")
        s.replace(0, 3, "www");
    else
        s += "zzz";
    std::cout << s;
}

//Задача №19:В данной строке вставить после каждого символа 'a' символ 'b'.
#include <iostream>
#include <string>

int main(){
    int i = 0;
    std::string txt;
    std::getline(std::cin,txt);
    while(txt.length() > i){
        if(txt.at(i) == 'a'){
            txt.insert(i+1, "b");
        }
        i++;
    }
    std::cout<<txt<<'\n';
    return 0;

}
