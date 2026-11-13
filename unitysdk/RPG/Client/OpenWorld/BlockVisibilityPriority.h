#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int BlockVisibilityPriority_TypeDefinitionIndex = 76047;

	enum class BlockVisibilityPriority : ::System::Int32
	{
		Low = 0,
		Middle = 1,
		High = 2,
	};
}
