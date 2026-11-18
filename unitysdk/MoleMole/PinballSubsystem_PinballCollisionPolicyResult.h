#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_PinballCollisionPolicyResult_TypeDefinitionIndex = 56749;

	struct alignas(4) PinballSubsystem_PinballCollisionPolicyResult
	{
		::System::Boolean CanQuery; // 0x10
		::System::Boolean IsTrigger; // 0x11
		::System::Boolean IsSolid; // 0x12
		::System::Boolean UsePhysicsResponse; // 0x13
	};
}
