#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int GraphPortType_TypeDefinitionIndex = 74046;

	enum class GraphPortType : ::System::Int32
	{
		Value = 1,
		Flow = 0,
	};
}
