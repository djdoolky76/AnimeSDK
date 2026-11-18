#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackObjectType_TypeDefinitionIndex = 58261;

	enum class HackObjectType : ::System::Int32
	{
		LittleRobot = 5,
		GiantMech = 6,
		Camera = 3,
		UAV = 4,
		None = 99,
		Gadget = 2,
		Monster = 1,
		NPC = 0,
	};
}
