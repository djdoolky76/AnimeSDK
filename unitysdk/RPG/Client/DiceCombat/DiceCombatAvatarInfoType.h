#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::DiceCombat
{
	enum class DiceCombatAvatarInfoType : ::System::Int32
	{
		StaticConfig = 0,
		OutOfBattle = 1,
		InBattle = 2,
	};
}
