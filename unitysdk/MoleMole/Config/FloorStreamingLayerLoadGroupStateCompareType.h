#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FloorStreamingLayerLoadGroupStateCompareType_TypeDefinitionIndex = 56386;

	enum class FloorStreamingLayerLoadGroupStateCompareType : ::System::Int32
	{
		NEQ = 1,
		LTE = 5,
		LT = 4,
		GT = 2,
		EQ = 0,
		GTE = 3,
	};
}
