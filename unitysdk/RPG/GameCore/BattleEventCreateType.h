#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class BattleEventCreateType : ::System::Int32
	{
		Normal = 0,
		GridFightBackendBE = 1,
		BEServant = 2,
	};
}
