#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotV3PageContext_JumpDefaultFocusType_TypeDefinitionIndex = 65259;

	enum class UIInterKnotV3PageContext_JumpDefaultFocusType : ::System::Int32
	{
		MissionTabFocusCurrentTrackQuest = 1,
		MissionTabFocusQuest = 3,
		MissionTabFocusMainQuest = 2,
		MissionTabFocusQuestRuntime = 4,
	};
}
