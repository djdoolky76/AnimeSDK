#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	enum class TacticsCardFlowReason : ::System::Byte
	{
		ShopPurchase = 1,
		Use = 2,
		Destroy = 3,
	};
}
