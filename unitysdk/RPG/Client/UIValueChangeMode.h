#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIValueChangeMode_TypeDefinitionIndex = 71070;

	enum class UIValueChangeMode : ::System::Int32
	{
		Linear = 0,
		CustomizedCurve = 1,
	};
}
