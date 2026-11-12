#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int SourceStrategy_TypeDefinitionIndex = 79800;

	enum class SourceStrategy : ::System::Int32
	{
		None = 0,
		Fixed = 1,
		FIFO = 2,
		FirstReady = 3,
	};
}
