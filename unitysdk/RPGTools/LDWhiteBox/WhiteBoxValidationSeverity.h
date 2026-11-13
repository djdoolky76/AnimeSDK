#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxValidationSeverity_TypeDefinitionIndex = 50008;

	enum class WhiteBoxValidationSeverity : ::System::Int32
	{
		Warning = 0,
		Error = 1,
	};
}
