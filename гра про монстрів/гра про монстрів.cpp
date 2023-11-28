#include <iostream>
#include <string>

// Базовий клас для монстрів
class Monster {
protected:
    std::string name;
    int health;

public:
    Monster(const std::string& monsterName, int monsterHealth) : name(monsterName), health(monsterHealth) {}

    // Функція для виведення інформації про монстра
    void printMonster() const {
        std::cout << "Monster Type: " << getType() << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Health: " << health << std::endl;
    }

    // Віртуальна функція для отримання типу монстра
    virtual std::string getType() const {
        return "Generic Monster";
    }
};

// Клас для орків
class Orc : public Monster {
public:
    Orc(const std::string& orcName, int orcHealth) : Monster(orcName, orcHealth) {}

    // Перевизначення функції для отримання типу монстра
    std::string getType() const override {
        return "Orc";
    }
};

// Клас для тролів
class Troll : public Monster {
public:
    Troll(const std::string& trollName, int trollHealth) : Monster(trollName, trollHealth) {}

    // Перевизначення функції для отримання типу монстра
    std::string getType() const override {
        return "Troll";
    }
};

// Клас для зомбі
class Zombie : public Monster {
public:
    Zombie(const std::string& zombieName, int zombieHealth) : Monster(zombieName, zombieHealth) {}

    // Перевизначення функції для отримання типу монстра
    std::string getType() const override {
        return "Zombie";
    }
};

// Клас для гоблінів
class Goblin : public Monster {
public:
    Goblin(const std::string& goblinName, int goblinHealth) : Monster(goblinName, goblinHealth) {}

    // Перевизначення функції для отримання типу монстра
    std::string getType() const override {
        return "Goblin";
    }
};

// Клас для відьмаків
class Witcher : public Monster {
public:
    Witcher(const std::string& witcherName, int witcherHealth) : Monster(witcherName, witcherHealth) {}

    // Перевизначення функції для отримання типу монстра
    std::string getType() const override {
        return "Witcher";
    }
};

int main() {
    // Ініціалізація монстрів
    Orc orc("Gronk", 80);
    Troll troll("Smashface", 120);
    Zombie zombie("Braaains", 50);
    Goblin goblin("Snarly", 60);
    Witcher witcher("Geralt", 150);

    // Виведення інформації про монстрів
    orc.printMonster();
    std::cout << std::endl;

    troll.printMonster();
    std::cout << std::endl;

    zombie.printMonster();
    std::cout << std::endl;

    goblin.printMonster();
    std::cout << std::endl;

    witcher.printMonster();

    return 0;
}
