#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndNode_LevelEndPerformType_TypeDefinitionIndex = 43829;

	enum class LDLevelEndNode_LevelEndPerformType : ::System::Int32
	{
		Dialog = 2,
		Custom = 5,
		Instant = 1,
		InDirectKill = 3,
		ShortCut = 4,
		Empty = 10,
		Invalid = -1,
		Normal = 0,
	};
}
