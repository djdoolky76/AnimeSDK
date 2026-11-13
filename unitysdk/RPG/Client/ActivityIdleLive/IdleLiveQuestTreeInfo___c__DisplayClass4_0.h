#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveQuestTreeTabData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CC690)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO___C__DISPLAYCLASS4_0__HASCHAPTERCANGETREWARDAFTER_B__0_OFFSET UNITYSDK_OFFSET(0x1D6CC890)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveQuestTreeInfo___c__DisplayClass4_0_TypeDefinitionIndex = 77701;

	class IdleLiveQuestTreeInfo___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 tabID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasChapterCanGetRewardAfter_b__0(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeTabData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO___C__DISPLAYCLASS4_0__HASCHAPTERCANGETREWARDAFTER_B__0_OFFSET))(this, a1);
		}

	};
}
