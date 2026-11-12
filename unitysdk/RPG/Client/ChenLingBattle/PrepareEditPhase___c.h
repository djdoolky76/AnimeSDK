#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD3BE180)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD3BE1C0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTFINISHPREPARE_B__8_0_OFFSET UNITYSDK_OFFSET(0xD3BE1F0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTFINISHPREPARE_B__8_1_OFFSET UNITYSDK_OFFSET(0xD3BE360)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTMOVEENTITY_B__10_0_OFFSET UNITYSDK_OFFSET(0xD3BE370)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTSELLHANDCARD_B__6_0_OFFSET UNITYSDK_OFFSET(0xD3BE1E0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTUSEHANDCARD_B__3_1_OFFSET UNITYSDK_OFFSET(0xD3BE1D0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int PrepareEditPhase___c_TypeDefinitionIndex = 78636;

	class PrepareEditPhase___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__8_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x68790);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x68798);
		}

		static ::System::Func_1<::RPG::Client::Promises::IPromise*>** StaticGet___9__8_0()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x687A0);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x687A8);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__3_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x687B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x687B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C_CTOR_OFFSET))(this);
		}

		::System::Void _RequestUseHandCard_b__3_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTUSEHANDCARD_B__3_1_OFFSET))(this, a1);
		}

		::System::Void _RequestSellHandCard_b__6_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTSELLHANDCARD_B__6_0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _RequestFinishPrepare_b__8_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTFINISHPREPARE_B__8_0_OFFSET))(this);
		}

		::System::Void _RequestFinishPrepare_b__8_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTFINISHPREPARE_B__8_1_OFFSET))(this, a1);
		}

		::System::Void _RequestMoveEntity_b__10_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTMOVEENTITY_B__10_0_OFFSET))(this, a1);
		}

	};
}
