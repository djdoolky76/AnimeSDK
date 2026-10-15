#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	enum class B2RotateType : ::System::Int32
	{
		b2_rotateNone = 0,
		b2_rotateBF = 1,
		b2_rotateBG = 2,
		b2_rotateCD = 3,
		b2_rotateCE = 4,
	};
}
