/**
 * Archipelago
 * entity.h
 *
 * Base class that provides basic game entity behaviours. Enforces positional and rendering behaviour.
 *
 * @author Bryn Walker
 */

#include "include/entity.h"

Entity::Entity(arc::Point2D<float> loc, arc::Color color){
	location = arc::Point2D<float>(loc.x, loc.y);
	_color = color;

	_shape = {
        arc::Point2D<float>(  0,  -12),
        arc::Point2D<float>(-12,   20),
        arc::Point2D<float>( 12,   20)
	};
}

Entity::Entity(arc::Point2D<int> loc, arc::Color color) : Entity(arc::Point2D<float>(loc.x, loc.y), color) {}

Entity::Entity(float x, float y, arc::Color color) : Entity(arc::Point2D<float>(x, y), color) {}

void Entity::Render() {
	arc::FillCircle(location.x, location.y, 50, _color);
}

Entity::~Entity() {
	return; // TODO: This is currently a NOP. Replace it with an actual destructor.
}