#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AENGOKAEEOA;
class ANGGDDJJBKO;

#define RPG_GAMECORE_RTBATTLEMODE___C__DISPLAYCLASS79_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE73EEF0)
#define RPG_GAMECORE_RTBATTLEMODE___C__DISPLAYCLASS79_0___INITTEAMCHARACTERS_B__0_OFFSET UNITYSDK_OFFSET(0xE740960)

namespace RPG::GameCore
{
	class RtBattleMode___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::AENGOKAEEOA* data; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___C__DISPLAYCLASS79_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __InitTeamCharacters_b__0(::ANGGDDJJBKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANGGDDJJBKO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___C__DISPLAYCLASS79_0___INITTEAMCHARACTERS_B__0_OFFSET))(this, a1);
		}

	};
}
