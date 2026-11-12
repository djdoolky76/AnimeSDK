#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ElfRestaurant/ElfRestaurantNPCView.h"

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTCUSTOMERVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDE98770)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantCustomerView_TypeDefinitionIndex = 79612;

	class ElfRestaurantCustomerView : public ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantNPCView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTCUSTOMERVIEW_CTOR_OFFSET))(this);
		}

	};
}
