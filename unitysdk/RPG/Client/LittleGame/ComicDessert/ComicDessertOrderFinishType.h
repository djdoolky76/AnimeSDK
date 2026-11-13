#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertOrderFinishType_TypeDefinitionIndex = 79912;

	enum class ComicDessertOrderFinishType : ::System::UInt32
	{
		Correct = 1,
		Timeout = 2,
		LevelEnd = 3,
	};
}
