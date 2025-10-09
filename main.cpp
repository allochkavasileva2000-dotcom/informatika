#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    std::cout << "Запуск SFML 3.0..." << std::endl;
    
    // Создаём окно
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML 3.0 Test");
    
    // Круг для демонстрации
    sf::CircleShape circle(100.f);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(300, 200);
    
    std::cout << "Окно создано!" << std::endl;
    
    // Главный цикл
    while (window.isOpen()) {
        // Обработка событий - ПРАВИЛЬНЫЙ синтаксис для SFML 3.0
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        
        // Отрисовка
        window.clear(sf::Color::Black);
        window.draw(circle);
        window.display();
    }
    
    std::cout << "Программа завершена." << std::endl;
    return 0;
}