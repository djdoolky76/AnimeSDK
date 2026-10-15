#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK { class Web_OnWebViewPageClose; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE6CD60)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE6CDA0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__OPENURLWITHLOGINSTATUS_B__37_2_OFFSET UNITYSDK_OFFSET(0x1BE6CDB0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__SHOWACCOUNTLISTWINDOW_B__58_4_OFFSET UNITYSDK_OFFSET(0x1BE6CE30)

namespace MiHoYo::SDK::HoYoPass
{
	class LoginManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Web_OnWebViewPageClose** StaticGet___9__37_2()
		{
			return (::MiHoYo::SDK::Web_OnWebViewPageClose**)UnitySDK::FromName("MiHoYo.SDK.HoYoPass", "<>c")->GetStaticField(0xDF10);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.HoYoPass", "<>c")->GetStaticField(0xDF18);
		}

		static ::System::Action** StaticGet___9__58_4()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.HoYoPass", "<>c")->GetStaticField(0xDF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _OpenUrlWithLoginStatus_b__37_2(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__OPENURLWITHLOGINSTATUS_B__37_2_OFFSET))(this, a1);
		}

		::System::Void _ShowAccountListWindow_b__58_4(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__SHOWACCOUNTLISTWINDOW_B__58_4_OFFSET))(this, a1);
		}

	};
}
