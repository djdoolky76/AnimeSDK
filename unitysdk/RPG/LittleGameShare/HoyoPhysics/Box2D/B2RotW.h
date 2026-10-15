#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FloatW.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2RotW
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW C; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW S; // 0x20
	};
}
