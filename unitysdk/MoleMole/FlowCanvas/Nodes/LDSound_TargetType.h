#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSound_TargetType_TypeDefinitionIndex = 43290;

	enum class LDSound_TargetType : ::System::Int32
	{
		Key = 2,
		Global = 3,
		Anchor = 0,
		Entity = 1,
	};
}
