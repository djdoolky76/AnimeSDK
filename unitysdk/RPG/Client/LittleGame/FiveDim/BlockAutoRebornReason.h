#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int BlockAutoRebornReason_TypeDefinitionIndex = 44336;

	enum class BlockAutoRebornReason : ::System::Int32
	{
		None = 0,
		MiniGame = 1,
	};
}
