#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	enum class B2BodyType : ::System::Int32
	{
		b2_staticBody = 0,
		b2_kinematicBody = 1,
		b2_dynamicBody = 2,
		b2_bodyTypeCount = 3,
	};
}
