#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC4CD7E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE___C__DISPLAYCLASS7_0__ONALLEQUIPSELECTFINISHED_B__0_OFFSET UNITYSDK_OFFSET(0xC4CDD90)

namespace RPG::Client::ActivityIdleLive
{
	class IdleLiveEquipFlyService___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::ValueTuple spEquipHintData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnAllEquipSelectFinished_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE___C__DISPLAYCLASS7_0__ONALLEQUIPSELECTFINISHED_B__0_OFFSET))(this);
		}

	};
}
