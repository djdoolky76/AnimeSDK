#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityRealityShow
{
	inline static constexpr unsigned int RealityShowEntranceViewModel__SelectPriority_TypeDefinitionIndex = 84916;

	enum class RealityShowEntranceViewModel__SelectPriority : ::System::Int32
	{
		NoRecord = 0,
		HasRecord = 1,
		Perfect = 2,
		Locked = 3,
	};
}
