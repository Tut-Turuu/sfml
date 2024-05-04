#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>




int main() {
    sf::RenderWindow window(sf::VideoMode(800, 700), "sfml_test", sf::Style::Default);

    sf::CircleShape circle;

    circle.setFillColor(sf::Color::Red);
    circle.setPosition(300, 400);
    circle.setRadius(100);


    sf::Font font;

    if (!font.loadFromFile("/usr/share/fonts/truetype/dejavu/DejaVuSans-Bold.ttf")) return -1;
    sf::Text text("text", font);

    sf::SoundBuffer sound_buff;

    if (!sound_buff.loadFromFile("/home/user/Downloads/mixkit-arcade-game-explosion-2759.wav")) return -1;

    sf::Sound sound;

    sound.setBuffer(sound_buff);
    sound.play();

    while (window.isOpen()) {


        sf::Event event;

        while (window.pollEvent(event)) {
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            
            default:
                break;
            }
        }

        window.draw(circle);
        window.draw(text);

        window.display();
        window.clear();
    }
}
