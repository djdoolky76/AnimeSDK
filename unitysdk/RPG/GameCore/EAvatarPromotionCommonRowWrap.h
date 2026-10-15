#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAvatarPromotionCommonRowWrap_TypeDefinitionIndex = 56546;

	enum class EAvatarPromotionCommonRowWrap : ::System::Byte
	{
		None = 0,
		AvatarPromotion = 1,
		AetherDivideSpiritPromotion = 2,
		All = 255,
	};
}
