#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3A2230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A2270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE___C__REFRESHISUNLOCK_B__3_0_OFFSET UNITYSDK_OFFSET(0x1D3A2280)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTechTreeNode___c_TypeDefinitionIndex = 77736;

	class IdleLiveTechTreeNode___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x2A520);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x2A528);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshIsUnlock_b__3_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE___C__REFRESHISUNLOCK_B__3_0_OFFSET))(this, a1);
		}

	};
}
