#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeProxy.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2ShapeCastInput
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy proxy; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 translation; // 0x58
		::System::Single maxFraction; // 0x60
		::System::Boolean canEncroach; // 0x64
	};
}
