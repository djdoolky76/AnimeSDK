#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK { class Web_OnWebViewPageClose; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFF5690)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF56D0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__OPENURLWITHLOGINSTATUS_B__37_2_OFFSET UNITYSDK_OFFSET(0x1CFF56E0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__SHOWACCOUNTLISTWINDOW_B__58_4_OFFSET UNITYSDK_OFFSET(0x1CFF5760)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c_TypeDefinitionIndex = 8320;

	class LoginManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.HoYoPass", "<>c")->GetStaticField(0x626D0);
		}

		static ::MiHoYo::SDK::Web_OnWebViewPageClose** StaticGet___9__37_2()
		{
			return (::MiHoYo::SDK::Web_OnWebViewPageClose**)UnitySDK::FromName("MiHoYo.SDK.HoYoPass", "<>c")->GetStaticField(0x626D8);
		}

		static ::System::Action_1<::System::String*>** StaticGet___9__58_4()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.HoYoPass", "<>c")->GetStaticField(0x626E0);
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
