#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class GameRefRoleExpiredType : ::System::Int32
	{
		Rarity = 0,
		Position = 1,
		Deleted = 2,
	};
}
