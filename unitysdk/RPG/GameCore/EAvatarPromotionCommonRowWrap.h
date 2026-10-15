#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EAvatarPromotionCommonRowWrap : ::System::Byte
	{
		None = 0,
		AvatarPromotion = 1,
		AetherDivideSpiritPromotion = 2,
		All = 255,
	};
}
