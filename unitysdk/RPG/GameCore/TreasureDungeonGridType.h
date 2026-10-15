#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TreasureDungeonGridType : ::System::Int32
	{
		Normal = 1,
		Key = 2,
		KeyDoor = 3,
		FinalDoor = 4,
		Enemy = 5,
		Item = 6,
		ItemRandom = 7,
		TrialAvatar = 8,
		TrialAvatarRandom = 9,
		Avatar = 10,
	};
}
