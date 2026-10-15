#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2ExplosionDef
	{
		::System::UInt64 maskBits; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 position; // 0x18
		::System::Single radius; // 0x20
		::System::Single falloff; // 0x24
		::System::Single impulsePerLength; // 0x28
	};
}
