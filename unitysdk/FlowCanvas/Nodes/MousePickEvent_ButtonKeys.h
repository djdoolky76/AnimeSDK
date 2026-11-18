#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int MousePickEvent_ButtonKeys_TypeDefinitionIndex = 30901;

	enum class MousePickEvent_ButtonKeys : ::System::Int32
	{
		Left = 0,
		Middle = 2,
		Right = 1,
	};
}
