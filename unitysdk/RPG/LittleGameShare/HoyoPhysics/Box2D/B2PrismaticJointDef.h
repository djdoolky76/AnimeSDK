#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointDef.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2PrismaticJointDef
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointDef base; // 0x10
		::System::Boolean enableSpring; // 0x80
		::System::Byte _padding0[0x3];
		::System::Single hertz; // 0x84
		::System::Single dampingRatio; // 0x88
		::System::Single targetTranslation; // 0x8C
		::System::Boolean enableLimit; // 0x90
		::System::Byte _padding1[0x3];
		::System::Single lowerTranslation; // 0x94
		::System::Single upperTranslation; // 0x98
		::System::Boolean enableMotor; // 0x9C
		::System::Byte _padding2[0x3];
		::System::Single maxMotorForce; // 0xA0
		::System::Single motorSpeed; // 0xA4
		::System::Int32 internalValue; // 0xA8
	};
}
