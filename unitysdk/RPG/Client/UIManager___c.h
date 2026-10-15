#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_UIMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE3C0B40)
#define RPG_CLIENT_UIMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE3C0B70)
#define RPG_CLIENT_UIMANAGER___C___GETFIRSTFOCUSABLECONTROLLER_B__215_0_OFFSET UNITYSDK_OFFSET(0xE3C0B80)
#define RPG_CLIENT_UIMANAGER___C___GETFIRSTFOCUSABLECONTROLLER_B__215_1_OFFSET UNITYSDK_OFFSET(0xE3C0C10)
#define RPG_CLIENT_UIMANAGER___C___GETFIRSTFOCUSABLECONTROLLER_B__215_2_OFFSET UNITYSDK_OFFSET(0xE3C0CA0)

namespace RPG::Client
{
	class UIManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3A640);
		}

		static ::System::Func_2<::RPG::Client::UIController*, ::System::Boolean>** StaticGet___9__215_0()
		{
			return (::System::Func_2<::RPG::Client::UIController*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3A648);
		}

		static ::System::Func_2<::RPG::Client::UIController*, ::System::Boolean>** StaticGet___9__215_2()
		{
			return (::System::Func_2<::RPG::Client::UIController*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3A650);
		}

		static ::System::Func_2<::RPG::Client::UIController*, ::System::Boolean>** StaticGet___9__215_1()
		{
			return (::System::Func_2<::RPG::Client::UIController*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3A658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetFirstFocusableController_b__215_0(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C___GETFIRSTFOCUSABLECONTROLLER_B__215_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetFirstFocusableController_b__215_1(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C___GETFIRSTFOCUSABLECONTROLLER_B__215_1_OFFSET))(this, a1);
		}

		::System::Boolean __GetFirstFocusableController_b__215_2(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C___GETFIRSTFOCUSABLECONTROLLER_B__215_2_OFFSET))(this, a1);
		}

	};
}
