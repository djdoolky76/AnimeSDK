#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GachaType : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		Newbie = 2,
		AvatarUp = 11,
		WeaponUp = 12,
		CollaborationAvatarUp = 21,
		CollaborationWeaponUp = 22,
	};
}
