#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndicatorLightType_TypeDefinitionIndex = 73142;

	enum class IndicatorLightType : ::System::Int32
	{
		None = 0,
		PlayerOnLight = 5,
		VisibleLight = 1,
		DecorationLight1 = 3,
		EventLight = 2,
		DecorationLight2 = 4,
	};
}
