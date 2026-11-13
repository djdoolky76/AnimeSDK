#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int GamepadFocusKind_TypeDefinitionIndex = 79819;

	enum class GamepadFocusKind : ::System::Int32
	{
		None = 0,
		Button = 1,
		OrderBubble = 2,
		CatCakeOrder = 3,
	};
}
