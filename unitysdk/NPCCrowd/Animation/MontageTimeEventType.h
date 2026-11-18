#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageTimeEventType_TypeDefinitionIndex = 66161;

	enum class MontageTimeEventType : ::System::Byte
	{
		Exit = 2,
		Length = 3,
		Tick = 0,
		Enter = 1,
	};
}
