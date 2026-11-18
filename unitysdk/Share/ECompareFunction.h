#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ECompareFunction_TypeDefinitionIndex = 16428;

	enum class ECompareFunction : ::System::Int16
	{
		LessEqual = 4,
		EnumCount = 7,
		Less = 3,
		NotEqual = 6,
		GreaterEqual = 1,
		Equal = 2,
		Greater = 0,
	};
}
