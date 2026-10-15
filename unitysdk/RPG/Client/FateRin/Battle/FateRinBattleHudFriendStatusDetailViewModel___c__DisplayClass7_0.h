#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/System/Object.h"
class AOFHFKPKKJI;

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCECFF10)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL___C__DISPLAYCLASS7_0___REFRESHSTATUSLIST_B__0_OFFSET UNITYSDK_OFFSET(0xCED0940)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudFriendStatusDetailViewModel___c__DisplayClass7_0_TypeDefinitionIndex = 80920;

	class FateRinBattleHudFriendStatusDetailViewModel___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::EnumStatusType type; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshStatusList_b__0(::AOFHFKPKKJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOFHFKPKKJI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL___C__DISPLAYCLASS7_0___REFRESHSTATUSLIST_B__0_OFFSET))(this, a1);
		}

	};
}
