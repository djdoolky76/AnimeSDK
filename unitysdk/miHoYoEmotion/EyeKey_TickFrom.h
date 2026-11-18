#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EyeKey_TickFrom_TypeDefinitionIndex = 38062;

	enum class EyeKey_TickFrom : ::System::Byte
	{
		FromEntity = 1,
		FromLateUpdate = 0,
	};
}
