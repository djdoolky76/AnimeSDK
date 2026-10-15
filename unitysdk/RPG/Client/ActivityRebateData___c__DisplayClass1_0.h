#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAOAEMOHCEP;
namespace RPG::Client { class ActivityRebateTriggerData; }

#define RPG_CLIENT_ACTIVITYREBATEDATA___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC59F4C0)
#define RPG_CLIENT_ACTIVITYREBATEDATA___C__DISPLAYCLASS1_0__SYNC_B__0_OFFSET UNITYSDK_OFFSET(0xC59F800)

namespace RPG::Client
{
	class ActivityRebateData___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::AAOAEMOHCEP* progress; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Sync_b__0(::RPG::Client::ActivityRebateTriggerData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityRebateTriggerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA___C__DISPLAYCLASS1_0__SYNC_B__0_OFFSET))(this, a1);
		}

	};
}
