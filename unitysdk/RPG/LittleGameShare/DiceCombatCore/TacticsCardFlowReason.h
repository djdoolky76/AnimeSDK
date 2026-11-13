#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int TacticsCardFlowReason_TypeDefinitionIndex = 37437;

	enum class TacticsCardFlowReason : ::System::Byte
	{
		ShopPurchase = 1,
		Use = 2,
		Destroy = 3,
	};
}
