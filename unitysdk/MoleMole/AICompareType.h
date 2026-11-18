#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AICompareType_TypeDefinitionIndex = 75295;

	enum class AICompareType : ::System::Int32
	{
		Less = 3,
		Equal = 2,
		Greater = 0,
		GreaterEqual = 1,
		LessEqual = 4,
		NotEqual = 5,
	};
}
