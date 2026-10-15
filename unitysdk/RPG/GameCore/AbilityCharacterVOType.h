#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AbilityCharacterVOType : ::System::Int32
	{
		Unknow = 0,
		ReceiveHealing = 5,
		ReceiveBuff = 6,
	};
}
