#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int FBehaviorInstanceTime_TypeDefinitionIndex = 8765;

	struct alignas(4) FBehaviorInstanceTime
	{
		::System::Double DelayTime; // 0x10
		::System::Double BlendInTime; // 0x18
		::System::Double ActiveTime; // 0x20
		::System::Double BlendOutTime; // 0x28
	};
}
