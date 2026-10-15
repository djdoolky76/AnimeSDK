#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GridFightEquipFuncType : ::System::Int32
	{
		None = 0,
		AvatarMaxNumberAdd = 2,
		Leader = 3,
		CraftableThiefGlove = 5,
		RadiantThiefGlove = 6,
		OriginEmblem = 10,
		ClassEmblem = 11,
		AddTraitLayer = 12,
	};
}
