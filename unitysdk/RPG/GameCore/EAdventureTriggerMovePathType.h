#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAdventureTriggerMovePathType_TypeDefinitionIndex = 25045;

	enum class EAdventureTriggerMovePathType : ::System::Int32
	{
		PathWay = 0,
		LevelCurve = 1,
	};
}
