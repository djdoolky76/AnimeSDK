#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
namespace System { class Object; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(8) B2BodyMoveEvent
	{
		::System::Object* userData; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform transform; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId bodyId; // 0x28
		::System::Boolean fellAsleep; // 0x40
	};
}
