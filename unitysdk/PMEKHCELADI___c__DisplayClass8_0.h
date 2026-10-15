#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMEKHCELADI;
namespace RPG::Client { class ActivityBenefitV2Round; }
namespace RPG::Client { class ScheduleData; }

#define PMEKHCELADI___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC311570)
#define PMEKHCELADI___C__DISPLAYCLASS8_0___ONSCHEDULECONFIGREFRESHFINISH_B__0_OFFSET UNITYSDK_OFFSET(0xC311B00)

inline static constexpr unsigned int PMEKHCELADI___c__DisplayClass8_0_TypeDefinitionIndex = 61406;

	class PMEKHCELADI___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::PMEKHCELADI* __4__this; // 0x10
		::RPG::Client::ActivityBenefitV2Round* round; // 0x18
		::System::UInt32 activityModuleID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEKHCELADI___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnScheduleConfigRefreshFinish_b__0(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + PMEKHCELADI___C__DISPLAYCLASS8_0___ONSCHEDULECONFIGREFRESHFINISH_B__0_OFFSET))(this, a1);
		}

	};
