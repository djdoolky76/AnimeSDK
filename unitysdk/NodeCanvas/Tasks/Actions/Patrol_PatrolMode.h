#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int Patrol_PatrolMode_TypeDefinitionIndex = 30573;

	enum class Patrol_PatrolMode : ::System::Int32
	{
		Random = 1,
		Progressive = 0,
	};
}
