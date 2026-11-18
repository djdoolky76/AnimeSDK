#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPerformType_TypeDefinitionIndex = 12361;

	enum class EPerformType : ::System::Int16
	{
		Bubble = 2,
		EnumCount = 3,
		None = -1,
		PlotPlay = 0,
		Dialog = 1,
	};
}
