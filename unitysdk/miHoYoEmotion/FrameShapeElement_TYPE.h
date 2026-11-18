#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int FrameShapeElement_TYPE_TypeDefinitionIndex = 38031;

	enum class FrameShapeElement_TYPE : ::System::Int32
	{
		EYE_LEFT = 1,
		MOUTH = 0,
		INVALID = -1,
		EYE_RIGHT = 2,
	};
}
