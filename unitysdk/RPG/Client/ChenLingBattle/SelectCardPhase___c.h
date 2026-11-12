#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD3C1BD0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD3C1C10)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__REFRESHCARD_B__3_0_OFFSET UNITYSDK_OFFSET(0xD3C1C20)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__REQUESTSELLHANDCARD_B__7_0_OFFSET UNITYSDK_OFFSET(0xD3C1C40)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__SELECTCARD_B__5_1_OFFSET UNITYSDK_OFFSET(0xD3C1C30)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectCardPhase___c_TypeDefinitionIndex = 78646;

	class SelectCardPhase___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__7_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x68830);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x68838);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__5_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x68840);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x68848);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C_CTOR_OFFSET))(this);
		}

		::System::Void _RefreshCard_b__3_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__REFRESHCARD_B__3_0_OFFSET))(this, a1);
		}

		::System::Void _SelectCard_b__5_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__SELECTCARD_B__5_1_OFFSET))(this, a1);
		}

		::System::Void _RequestSellHandCard_b__7_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__REQUESTSELLHANDCARD_B__7_0_OFFSET))(this, a1);
		}

	};
}
