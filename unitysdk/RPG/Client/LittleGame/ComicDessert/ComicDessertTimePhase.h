#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertTimePhase_TypeDefinitionIndex = 80123;

	enum class ComicDessertTimePhase : ::System::Int32
	{
		Normal = 0,
		Urgent = 1,
		Last10 = 2,
	};
}
