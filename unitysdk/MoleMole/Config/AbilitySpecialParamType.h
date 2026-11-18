#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilitySpecialParamType_TypeDefinitionIndex = 67255;

	enum class AbilitySpecialParamType : ::System::Int32
	{
		Float = 0,
		Boolean = 2,
		Int = 1,
		String = 3,
	};
}
