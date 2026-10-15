#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ILBattleCharacterLocation : ::System::Int32
	{
		Front = 0,
		Background = 1,
		Support = 2,
		Captain = 3,
	};
}
