#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AnchorPointForwardAxis_TypeDefinitionIndex = 81811;

	enum class AnchorPointForwardAxis : ::System::Int32
	{
		NegativeAxisZ = 6,
		None = 0,
		NegativeAxisY = 4,
		PositiveAxisZ = 5,
		PositiveAxisY = 3,
		NegativeAxisX = 2,
		PositiveAxisX = 1,
	};
}
