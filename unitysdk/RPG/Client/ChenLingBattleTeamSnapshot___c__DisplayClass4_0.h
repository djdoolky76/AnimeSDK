#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCHFCKDICNA;

#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCA761E0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT___C__DISPLAYCLASS4_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0xCA77690)

namespace RPG::Client
{
	class ChenLingBattleTeamSnapshot___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 waveID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__0(::FCHFCKDICNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCHFCKDICNA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT___C__DISPLAYCLASS4_0___CTOR_B__0_OFFSET))(this, a1);
		}

	};
}
