#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int IGraphNode_NodeState_TypeDefinitionIndex = 54878;

	enum class IGraphNode_NodeState : ::System::Int32
	{
		Done = 2,
		Active = 1,
		Create = 0,
	};
}
