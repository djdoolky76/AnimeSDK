#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ElfRestaurant
{
	enum class SIMFoodState : ::System::Int32
	{
		Unknown = 0,
		Ready = 1,
		Fetching = 2,
		Delivery = 3,
	};
}
