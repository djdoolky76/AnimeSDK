#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMapGridCornerType_TypeDefinitionIndex = 12368;

	enum class EMapGridCornerType : ::System::Int16
	{
		Center = 5,
		RightUp = 2,
		LeftUp = 1,
		LeftDown = 3,
		RightDown = 4,
		None = 0,
	};
}
