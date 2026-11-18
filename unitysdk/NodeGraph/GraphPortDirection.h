#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int GraphPortDirection_TypeDefinitionIndex = 70174;

	enum class GraphPortDirection : ::System::Int32
	{
		In = 0,
		Out = 1,
	};
}
