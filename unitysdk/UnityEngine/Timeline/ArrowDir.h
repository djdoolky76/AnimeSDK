#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ArrowDir_TypeDefinitionIndex = 32440;

	enum class ArrowDir : ::System::Byte
	{
		LeftTop = 0,
		RightTop = 1,
		LeftUp = 2,
		LeftDown = 3,
		LeftBottom = 4,
		RightBottom = 5,
		RightUp = 6,
		RightDown = 7,
		Count = 8,
	};
}
