#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class GridFightRoleChangeType : ::System::Int32
	{
		HeroPathChange = 0,
		HeroPathChangeToMemory = 1,
		RarityChange = 2,
		RoleChange = 3,
	};
}
