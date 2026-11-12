#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int GamepadPickupSource_TypeDefinitionIndex = 79821;

	enum class GamepadPickupSource : ::System::Int32
	{
		None = 0,
		PrepArea = 1,
		Delivery = 2,
		Taiyaki = 3,
		Tofu = 4,
		Device = 5,
	};
}
