#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MissionUtils_SubMissionSortType_TypeDefinitionIndex = 68126;

	enum class MissionUtils_SubMissionSortType : ::System::Int32
	{
		Start = 0,
		Normal = 1,
		Finish = 2,
	};
}
