#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int TimeControl_TypeDefinitionIndex = 39061;

	struct alignas(4) TimeControl
	{
		::System::Boolean controlDuration; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single duration; // 0x14
	};
}
