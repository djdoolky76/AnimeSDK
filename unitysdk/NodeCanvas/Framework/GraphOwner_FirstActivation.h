#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphOwner_FirstActivation_TypeDefinitionIndex = 29422;

	enum class GraphOwner_FirstActivation : ::System::Int32
	{
		OnEnable = 0,
		Async = 2,
		OnStart = 1,
	};
}
