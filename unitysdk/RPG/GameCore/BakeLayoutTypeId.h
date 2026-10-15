#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BakeLayoutTypeId_TypeDefinitionIndex = 16446;

	enum class BakeLayoutTypeId : ::System::UInt16
	{
		TypeId_TurnBasedModifierConfig = 0,
		TypeId_TurnBasedAbilityConfig = 1,
		TypeId_TaskListTemplateConfig = 2,
		TypeId_TargetAliasConfig = 3,
		TypeId_FormationData = 4,
		TypeId_AIFactorGroupConfig = 5,
		TypeId_VCameraConfig = 6,
		TypeId_SubMissionInfoConfig = 7,
	};
}
