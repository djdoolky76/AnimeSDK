#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointDef.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2DistanceJointDef_TypeDefinitionIndex = 36659;

	struct alignas(4) B2DistanceJointDef
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointDef base; // 0x10
		::System::Single length; // 0x80
		::System::Boolean enableSpring; // 0x84
		::System::Byte _padding0[0x3];
		::System::Single hertz; // 0x88
		::System::Single dampingRatio; // 0x8C
		::System::Boolean enableLimit; // 0x90
		::System::Byte _padding1[0x3];
		::System::Single minLength; // 0x94
		::System::Single maxLength; // 0x98
		::System::Boolean enableMotor; // 0x9C
		::System::Byte _padding2[0x3];
		::System::Single maxMotorForce; // 0xA0
		::System::Single motorSpeed; // 0xA4
		::System::Int32 internalValue; // 0xA8
	};
}
