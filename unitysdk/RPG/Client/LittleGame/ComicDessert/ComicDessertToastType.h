#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertToastType_TypeDefinitionIndex = 80136;

	enum class ComicDessertToastType : ::System::Int32
	{
		None = 0,
		BusinessStart = 1,
		BusinessEnd = 2,
		FriendVisit = 3,
	};
}
