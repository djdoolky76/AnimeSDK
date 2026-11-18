#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class MGBBDIIJPFJ;

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_BallPenetrationState_TypeDefinitionIndex = 56740;

	struct alignas(8) PinballSubsystem_BallPenetrationState
	{
		::MGBBDIIJPFJ* Ball; // 0x10
		::MGBBDIIJPFJ* PenetratedObject; // 0x18
		::System::UInt32 PenetratedEntityId; // 0x20
		::System::Boolean IsSustainedContact; // 0x24
	};
}
