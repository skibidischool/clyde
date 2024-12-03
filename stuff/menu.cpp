#include <vector>
#include <string>
#include <iostream>

struct UiStyle {
    std::string color;
};

class UiElement {
    private:
        UiStyle style;
    public:
        std::string name;

        UiElement setColor(std::string col) {
            style.color = col;
            return *this;
        }

        UiElement setName(std::string nm) {
            name = nm;
            return *this;
        }
};

UiElement Button(int clickAction) {
    UiElement element{};
    element.setName("Button");

    return element;
}

std::vector<UiElement> Menu() {
    std::vector<UiElement> element = {
        Button(1).setColor("ffffff").setName("test"),
        Button(2)
    };

    return element;
}

int main() {
    for(const UiElement& element : Menu()) {
        std::cout << "i = " << element.name << std::endl;
    }

    return 0;
}