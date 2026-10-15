#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveGiftDanmu; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC4DB310)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC4DB350)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER___C___CLEANENDEDDANMUS_B__18_0_OFFSET UNITYSDK_OFFSET(0xC4DB360)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGiftDanmuSpawner___c_TypeDefinitionIndex = 75181;

	class IdleLiveGiftDanmuSpawner___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x212E0);
		}

		static ::System::Predicate_1<::RPG::Client::ActivityIdleLive::IdleLiveGiftDanmu*>** StaticGet___9__18_0()
		{
			return (::System::Predicate_1<::RPG::Client::ActivityIdleLive::IdleLiveGiftDanmu*>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x212E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CleanEndedDanmus_b__18_0(::RPG::Client::ActivityIdleLive::IdleLiveGiftDanmu* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGiftDanmu*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTDANMUSPAWNER___C___CLEANENDEDDANMUS_B__18_0_OFFSET))(this, a1);
		}

	};
}
