#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ElfBehaviorStateType : ::System::Int32
	{
		Unknown = 0,
		Think = 1,
		Disappointed = 2,
		Angry = 3,
		Happy = 4,
		Normal = 5,
		Love = 6,
		Expect = 7,
		Drink = 8,
	};
}
