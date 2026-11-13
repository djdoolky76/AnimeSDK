#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D14BAA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D14BAE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW___C__GET_ISACTIVE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1D14BAF0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTechTreeRow___c_TypeDefinitionIndex = 77728;

	class IdleLiveBaseTechTreeRow___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x1F440);
		}

		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x1F448);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsActive_b__1_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW___C__GET_ISACTIVE_B__1_0_OFFSET))(this, a1);
		}

	};
}
