#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPPKGHJGOCC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class FAKDJHMJOHF;
namespace Proto { class ItemList; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveMessageService; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGESERVICE___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC4E8DB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGESERVICE___C__DISPLAYCLASS1_0__TAKEMESSAGEREWARD_B__0_OFFSET UNITYSDK_OFFSET(0xC4E8DD0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveMessageService___c__DisplayClass1_0_TypeDefinitionIndex = 75372;

	class IdleLiveMessageService___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FAKDJHMJOHF* contentRewardService; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveMessageService* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGESERVICE___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _TakeMessageReward_b__0(::System::ValueTuple_2<::Proto::ItemList*, ::LPPKGHJGOCC> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::Proto::ItemList*, ::LPPKGHJGOCC>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGESERVICE___C__DISPLAYCLASS1_0__TAKEMESSAGEREWARD_B__0_OFFSET))(this, a1);
		}

	};
}
