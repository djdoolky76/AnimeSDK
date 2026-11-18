#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EReloadGroupReason_TypeDefinitionIndex = 49968;

	enum class EReloadGroupReason : ::System::Int32
	{
		GM = 2,
		GraphNode_ReloadGroup = 9,
		Unstuck = 3,
		TeamChange = 7,
		TeamAllDead_Revive = 5,
		GraphNode_RollbackPoint = 6,
		Default = 0,
		GraphNode_ReloadSuite = 8,
		ServerNotify = 1,
		TeamAllDead = 4,
	};
}
