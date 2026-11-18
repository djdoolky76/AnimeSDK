#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AnimStateCheckType_TypeDefinitionIndex = 60401;

	enum class AnimStateCheckType : ::System::Int32
	{
		LoopCheckOnce = 1,
		Normal = 0,
		LoopCheckAlways = 2,
	};
}
