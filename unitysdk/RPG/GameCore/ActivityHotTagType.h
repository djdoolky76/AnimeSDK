#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHotTagType_TypeDefinitionIndex = 11733;

	enum class ActivityHotTagType : ::System::Int32
	{
		None = 0,
		Cycle = 1,
		LimitTime = 2,
	};
}
