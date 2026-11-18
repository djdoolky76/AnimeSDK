#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphBase_GraphState_TypeDefinitionIndex = 52048;

	enum class NodeGraphBase_GraphState : ::System::Int32
	{
		Init = 1,
		End = 3,
		None = 0,
		Running = 2,
	};
}
