#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHFCJKKKNLP;

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC4F0FF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS___C__DISPLAYCLASS16_0__INITANDENTERBATTLE_B__0_OFFSET UNITYSDK_OFFSET(0xC4F1000)

namespace RPG::Client::ActivityIdleLive
{
	class IdleLiveShortcuts___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::FHFCJKKKNLP* gameFlowPrepareService; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Void _InitAndEnterBattle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS___C__DISPLAYCLASS16_0__INITANDENTERBATTLE_B__0_OFFSET))(this);
		}

	};
}
