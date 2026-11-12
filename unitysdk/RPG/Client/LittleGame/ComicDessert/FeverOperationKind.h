#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int FeverOperationKind_TypeDefinitionIndex = 79965;

	enum class FeverOperationKind : ::System::Int32
	{
		Produce = 0,
		ServeDish = 1,
		TaiyakiEmit = 2,
	};
}
