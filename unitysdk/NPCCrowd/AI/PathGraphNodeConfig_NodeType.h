#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphNodeConfig_NodeType_TypeDefinitionIndex = 47219;

	enum class PathGraphNodeConfig_NodeType : ::System::Int32
	{
		None = 0,
		Connector = 2,
		Spline = 1,
	};
}
