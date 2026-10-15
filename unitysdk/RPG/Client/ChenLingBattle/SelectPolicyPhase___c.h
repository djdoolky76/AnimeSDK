#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCA60060)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCA600A0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__REFRESHPOLICY_B__3_0_OFFSET UNITYSDK_OFFSET(0xCA600B0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__REQUESTSELLHANDCARD_B__8_0_OFFSET UNITYSDK_OFFSET(0xCA600D0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTPOLICYPHASE___C__SELECTPOLICY_B__6_1_OFFSET UNITYSDK_OFFSET(0xCA600C0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectPolicyPhase___c_TypeDefinitionIndex = 76318;

	class SelectPolicyPhase___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__6_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x6E640);
		}

		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x6E648);
		}

		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x6E650);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x6E658);
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
