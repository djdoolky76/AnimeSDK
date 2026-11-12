#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdjoinType_TypeDefinitionIndex = 25277;

	enum class AdjoinType : ::System::UInt16
	{
		Left = 1,
		Right = 2,
		LeftAndRight = 3,
	};
}
