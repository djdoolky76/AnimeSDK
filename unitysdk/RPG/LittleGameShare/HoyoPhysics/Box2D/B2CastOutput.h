#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2CastOutput
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 normal; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 point; // 0x18
		::System::Single fraction; // 0x20
		::System::Int32 iterations; // 0x24
		::System::Boolean hit; // 0x28
	};
}
