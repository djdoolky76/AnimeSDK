#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ElfRestaurant/ElfRestaurantView.h"

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTFOODVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD42CB40)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	class ElfRestaurantFoodView : public ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTFOODVIEW_CTOR_OFFSET))(this);
		}

	};
}
