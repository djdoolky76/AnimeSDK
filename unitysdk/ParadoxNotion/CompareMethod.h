#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int CompareMethod_TypeDefinitionIndex = 30897;

	enum class CompareMethod : ::System::Int32
	{
		GreaterThan = 1,
		EqualTo = 0,
		LessOrEqualTo = 4,
		LessThan = 2,
		GreaterOrEqualTo = 3,
	};
}
