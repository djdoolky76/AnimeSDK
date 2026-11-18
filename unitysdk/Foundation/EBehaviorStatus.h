#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int EBehaviorStatus_TypeDefinitionIndex = 8764;

	enum class EBehaviorStatus : ::System::Int32
	{
		BlendOut = 3,
		ReadyToDestroy = 4,
		Uninitialized = 0,
		BlendIn = 1,
		Active = 2,
	};
}
