#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GachaGroupType : ::System::Int32
	{
		Unknown = 0,
		MultiAvatarUp = 1,
		MultiWeaponUp = 2,
		Collaboration = 3,
		CollaborationMerge = 4,
	};
}
