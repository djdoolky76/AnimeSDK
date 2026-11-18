#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HackEntrySubSystem_HackEntrySubSystemMode_TypeDefinitionIndex = 70995;

	enum class HackEntrySubSystem_HackEntrySubSystemMode : ::System::Int32
	{
		Camera = 1,
		LittleRobot = 3,
		GiantMech = 4,
		Drone = 2,
		Normal = 0,
	};
}
