#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNEEKNHIOE;
namespace RPG::GameCore { class GameEntity; }

#define LDMBNFAMCOI___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB63DE60)
#define LDMBNFAMCOI___C__DISPLAYCLASS6_0___REFRESHSUMMONLINK_B__0_OFFSET UNITYSDK_OFFSET(0xB63E000)

	class LDMBNFAMCOI___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* summoner; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBNFAMCOI___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshSummonLink_b__0(::ECNEEKNHIOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECNEEKNHIOE*))((::PBYTE)hIl2Cpp + LDMBNFAMCOI___C__DISPLAYCLASS6_0___REFRESHSUMMONLINK_B__0_OFFSET))(this, a1);
		}

	};
