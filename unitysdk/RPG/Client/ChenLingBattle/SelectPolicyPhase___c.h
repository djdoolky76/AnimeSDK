#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7E35F0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E3630)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__REFRESHPOLICY_B__3_0_OFFSET UNITYSDK_OFFSET(0x1D7E3640)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__REQUESTSELLHANDCARD_B__8_0_OFFSET UNITYSDK_OFFSET(0x1D7E3660)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__SELECTPOLICY_B__6_1_OFFSET UNITYSDK_OFFSET(0x1D7E3650)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectPolicyPhase___c_TypeDefinitionIndex = 78648;

	class SelectPolicyPhase___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x720B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x720B8);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x720C0);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__6_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x720C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C_CTOR_OFFSET))(this);
		}

		::System::Void _RefreshPolicy_b__3_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__REFRESHPOLICY_B__3_0_OFFSET))(this, a1);
		}

		::System::Void _SelectPolicy_b__6_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__SELECTPOLICY_B__6_1_OFFSET))(this, a1);
		}

		::System::Void _RequestSellHandCard_b__8_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__REQUESTSELLHANDCARD_B__8_0_OFFSET))(this, a1);
		}

	};
}
