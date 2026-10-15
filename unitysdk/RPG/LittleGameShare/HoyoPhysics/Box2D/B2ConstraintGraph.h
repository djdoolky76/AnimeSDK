#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2GraphColor.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(8) B2ConstraintGraph
	{
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2GraphColor>* colors; // 0x10
	};
}
