#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TimePeriodType_TypeDefinitionIndex = 58568;

	enum class TimePeriodType : ::System::Int32
	{
		Night = 2,
		Morning = 0,
		Dusk = 1,
		Noon = 3,
	};
}
