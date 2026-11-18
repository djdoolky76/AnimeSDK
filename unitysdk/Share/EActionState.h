#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EActionState_TypeDefinitionIndex = 9864;

	enum class EActionState : ::System::Int16
	{
		Init = 0,
		EnumCount = 4,
		Finished = 2,
		Error = 3,
		Running = 1,
	};
}
