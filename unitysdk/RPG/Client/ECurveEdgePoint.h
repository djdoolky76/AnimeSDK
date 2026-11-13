#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ECurveEdgePoint_TypeDefinitionIndex = 70511;

	enum class ECurveEdgePoint : ::System::Int32
	{
		Start = 0,
		Finish = 1,
	};
}
