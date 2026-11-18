#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeSelectionFallback_TypeDefinitionIndex = 31131;

	enum class StateTreeSelectionFallback : ::System::Byte
	{
		None = 0,
		NextSelectableSibling = 1,
	};
}
