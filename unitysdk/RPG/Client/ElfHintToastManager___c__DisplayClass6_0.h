#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ElfRestaurantProgressData; }
namespace RPG::Client { class UserPrefs; }

#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCDA5A80)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS6_0__CHECKMENUCONFIGHINTS_B__0_OFFSET UNITYSDK_OFFSET(0xCDA6750)

namespace RPG::Client
{
	class ElfHintToastManager___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::UserPrefs* userPrefs; // 0x10
		::RPG::Client::ElfRestaurantProgressData* currentProgressData; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _CheckMenuConfigHints_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS6_0__CHECKMENUCONFIGHINTS_B__0_OFFSET))(this);
		}

	};
}
