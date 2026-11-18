#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int NodeToggler_ToggleMode_TypeDefinitionIndex = 29233;

	enum class NodeToggler_ToggleMode : ::System::Int32
	{
		Toggle = 2,
		Enable = 0,
		Disable = 1,
	};
}
