#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCardPileType_TypeDefinitionIndex = 24448;

	enum class FateRinCardPileType : ::System::UInt16
	{
		None = 0,
		Hand = 1,
		Deck = 2,
		Draw = 4,
		Discard = 8,
		Exile = 16,
		Executing = 32,
		ParamCardList = 64,
		CurSelectCard = 128,
		AllCardInstance = 13,
	};
}
