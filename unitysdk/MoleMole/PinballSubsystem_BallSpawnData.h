#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_BallSpawnData_TypeDefinitionIndex = 56756;

	struct alignas(4) PinballSubsystem_BallSpawnData
	{
		::System::UInt32 TemplateId; // 0x10
		::System::Int32 Level; // 0x14
	};
}
