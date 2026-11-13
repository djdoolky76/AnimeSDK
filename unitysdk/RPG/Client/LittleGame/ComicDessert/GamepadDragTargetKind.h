#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int GamepadDragTargetKind_TypeDefinitionIndex = 79902;

	enum class GamepadDragTargetKind : ::System::Int32
	{
		None = 0,
		Button = 1,
		Bubble = 2,
		CatCake = 3,
	};
}
