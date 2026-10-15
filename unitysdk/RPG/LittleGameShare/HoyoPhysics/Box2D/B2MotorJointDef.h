#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointDef.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2MotorJointDef
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointDef base; // 0x10
		::System::Single maxForce; // 0x80
		::System::Single maxTorque; // 0x84
		::System::Single correctionFactor; // 0x88
		::System::Int32 internalValue; // 0x8C
	};
}
