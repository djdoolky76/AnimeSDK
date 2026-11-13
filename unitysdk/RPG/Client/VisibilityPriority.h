#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int VisibilityPriority_TypeDefinitionIndex = 63568;

	enum class VisibilityPriority : ::System::Int32
	{
		None = 0,
		Primary = 1,
		Override = 2,
		Exclusive = 3,
	};
}
