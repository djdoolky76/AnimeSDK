#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	enum class B2SeparationType : ::System::Int32
	{
		b2_pointsType = 0,
		b2_faceAType = 1,
		b2_faceBType = 2,
	};
}
