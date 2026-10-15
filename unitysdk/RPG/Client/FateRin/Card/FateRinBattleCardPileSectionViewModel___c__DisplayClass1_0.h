#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class COOONBGCCCM;

#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCEE2650)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL___C__DISPLAYCLASS1_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0xCEE31F0)

namespace RPG::Client::FateRin::Card
{
	class FateRinBattleCardPileSectionViewModel___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::FateRinHouguOwnerType ownerType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__0(::COOONBGCCCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::COOONBGCCCM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL___C__DISPLAYCLASS1_0___CTOR_B__0_OFFSET))(this, a1);
		}

	};
}
