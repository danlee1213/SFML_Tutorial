#include <iostream>
#include "SFML\System.hpp"
#include "SFML\Graphics.hpp"
#include "SFML\Window.hpp"

using namespace sf;

int main() {
	
	RenderWindow window(VideoMode(640, 400), "Example", Style::Default);
	window.setFramerateLimit(60);
	//Initialize circle
	CircleShape shape(50.f);

	while (window.isOpen()) {

		Event event;
		while (window.pollEvent(event)){ 

			//If we click close button of the window
			if (event.type == Event::Closed) {
				window.close();
			 }
			//if(event.type == Event::KeyPressed)
		}

		//Update
		shape.move(0.1f, 0.f);

		//Delete previous one and keep updating current code
		window.clear(Color::Cyan);

		//Draw circle
		window.draw(shape);

		//Display new frame 
		window.display();
	}
	
	return 0;
}