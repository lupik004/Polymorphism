#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>


class Paddle
{
private:
	sf::Vector2f mPosition;
	sf::RectangleShape mRectangle;
	float mSpeed = 1000.0f;
	bool mMovingRight = true;
	bool mMovingLeft = true;

public:
	Paddle(float posX, float posY); // constructor 
	sf::FloatRect getPosition();
	sf::RectangleShape getShape();
	void moveLeft();
	void moveRight();
	void stopLeft();
	void stopRight();

	void update(sf::Time dt);


};