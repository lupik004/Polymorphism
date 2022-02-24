#include "Paddle.h"

Paddle::Paddle(float posX, float posY)
{
	mPosition.x = posX;
	mPosition.y = posY;

	mRectangle.setSize(sf::Vector2f(50, 5));
	mRectangle.setPosition(mPosition);
}

sf::FloatRect Paddle::getPosition()
{
	return mRectangle.getGlobalBounds();
}

sf::RectangleShape Paddle::getShape()
{
	return mRectangle;
}

void Paddle::moveLeft()
{
	mMovingLeft = true;
}

void Paddle::moveRight()
{
	mMovingRight = true;
}

void Paddle::stopLeft()
{
	mMovingLeft = false;
}

void Paddle::stopRight()
{
	mMovingRight = false;
}

void Paddle::update(sf::Time dt)
{
	if (mMovingLeft)
	{
		mPosition.x -= mSpeed * dt.asSeconds();
	}
	if (mMovingRight)
	{
		mPosition.x += mSpeed * dt.asSeconds();
	}

	mRectangle.setPosition(mPosition);
}


