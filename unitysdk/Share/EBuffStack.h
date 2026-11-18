#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBuffStack_TypeDefinitionIndex = 9766;

	enum class EBuffStack : ::System::Int16
	{
		Unique = 0,
		EnumCount = 3,
		Overwrite = 1,
		Stack = 2,
	};
}
