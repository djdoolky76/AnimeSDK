#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointDef.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2WheelJointDef
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointDef base; // 0x10
		::System::Boolean enableSpring; // 0x80
		::System::Byte _padding0[0x3];
		::System::Single hertz; // 0x84
		::System::Single dampingRatio; // 0x88
		::System::Boolean enableLimit; // 0x8C
		::System::Byte _padding1[0x3];
		::System::Single lowerTranslation; // 0x90
		::System::Single upperTranslation; // 0x94
		::System::Boolean enableMotor; // 0x98
		::System::Byte _padding2[0x3];
		::System::Single maxMotorTorque; // 0x9C
		::System::Single motorSpeed; // 0xA0
		::System::Int32 internalValue; // 0xA4
	};
}
