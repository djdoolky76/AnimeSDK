#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveTimedEffect; }
namespace System { class Object; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE___C__DISPLAYCLASS6_1_CTOR_OFFSET UNITYSDK_OFFSET(0xC4D1430)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE___C__DISPLAYCLASS6_1__SHOWFUNCUNLOCKFLY_B__1_OFFSET UNITYSDK_OFFSET(0xC4D1440)

namespace RPG::Client::ActivityIdleLive
{
	template <typename T>
	class IdleLiveFuncUnlockFlyService___c__DisplayClass6_1 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveTimedEffect* timedEffect; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE___C__DISPLAYCLASS6_1_CTOR_OFFSET))(this);
		}

		::System::Void _ShowFuncUnlockFly_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE___C__DISPLAYCLASS6_1__SHOWFUNCUNLOCKFLY_B__1_OFFSET))(this);
		}

	};
}
