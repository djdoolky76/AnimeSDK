#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int BasketTier_TypeDefinitionIndex = 79803;

	enum class BasketTier : ::System::Int32
	{
		Empty = 0,
		Half = 1,
		FullNoTip = 2,
		FullTip = 3,
	};
}
