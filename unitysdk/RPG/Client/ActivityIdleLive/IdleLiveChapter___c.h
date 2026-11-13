#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D14DBB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D14DBF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER___C__ISALLBOSSNODEFINISHED_B__49_0_OFFSET UNITYSDK_OFFSET(0x1D14DC00)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveChapter___c_TypeDefinitionIndex = 77474;

	class IdleLiveChapter___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x1F760);
		}

		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveNode*, ::System::Boolean>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveNode*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x1F768);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAllBossNodeFinished_b__49_0(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER___C__ISALLBOSSNODEFINISHED_B__49_0_OFFSET))(this, a1);
		}

	};
}
