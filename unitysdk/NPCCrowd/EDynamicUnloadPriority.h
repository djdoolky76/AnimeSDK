#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int EDynamicUnloadPriority_TypeDefinitionIndex = 48009;

	enum class EDynamicUnloadPriority : ::System::Int32
	{
		Delayable = 1,
		Protected = 0,
		Cullable = 2,
	};
}
