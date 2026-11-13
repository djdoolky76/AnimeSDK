#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTORYLINEGAMECONTEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D38F870)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTORYLINEGAMECONTEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38F8B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTORYLINEGAMECONTEXT___C___ONLEAVEBATTLE_B__32_0_OFFSET UNITYSDK_OFFSET(0x1D38F8C0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveStoryLineGameContext___c_TypeDefinitionIndex = 77650;

	class IdleLiveStoryLineGameContext___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__32_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x28C60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x28C68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTORYLINEGAMECONTEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTORYLINEGAMECONTEXT___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnLeaveBattle_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTORYLINEGAMECONTEXT___C___ONLEAVEBATTLE_B__32_0_OFFSET))(this);
		}

	};
}
