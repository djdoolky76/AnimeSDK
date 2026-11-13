#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int TouchUnitType_TypeDefinitionIndex = 41870;

	enum class TouchUnitType : ::System::Int32
	{
		Percent = 0,
		Pixels = 1,
	};
}
