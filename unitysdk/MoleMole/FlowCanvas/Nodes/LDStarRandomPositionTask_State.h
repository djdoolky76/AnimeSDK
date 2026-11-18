#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStarRandomPositionTask_State_TypeDefinitionIndex = 68477;

	enum class LDStarRandomPositionTask_State : ::System::Int32
	{
		Runing = 1,
		Stop = 0,
		Pause = 2,
	};
}
