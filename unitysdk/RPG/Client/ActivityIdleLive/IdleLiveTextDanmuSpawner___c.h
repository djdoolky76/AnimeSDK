#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuBase; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3A5030)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A5070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER___C___CLEANENDEDDANMUS_B__38_0_OFFSET UNITYSDK_OFFSET(0x1D3A5080)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTextDanmuSpawner___c_TypeDefinitionIndex = 77517;

	class IdleLiveTextDanmuSpawner___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::ActivityIdleLive::IdleLiveDanmuBase*>** StaticGet___9__38_0()
		{
			return (::System::Predicate_1<::RPG::Client::ActivityIdleLive::IdleLiveDanmuBase*>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x2A730);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x2A738);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CleanEndedDanmus_b__38_0(::RPG::Client::ActivityIdleLive::IdleLiveDanmuBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDanmuBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER___C___CLEANENDEDDANMUS_B__38_0_OFFSET))(this, a1);
		}

	};
}
