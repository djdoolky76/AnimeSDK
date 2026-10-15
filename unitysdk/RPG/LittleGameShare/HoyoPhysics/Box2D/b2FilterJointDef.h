#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointDef.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) b2FilterJointDef
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointDef base; // 0x10
		::System::Int32 internalValue; // 0x80
	};
}
