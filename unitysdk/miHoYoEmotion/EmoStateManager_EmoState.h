#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmoStateManager_EmoState_TypeDefinitionIndex = 38046;

	enum class EmoStateManager_EmoState : ::System::Int32
	{
		BLENDING = 0,
		BLINKING = 1,
		INVALID = -1,
	};
}
