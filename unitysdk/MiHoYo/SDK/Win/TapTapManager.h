#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class TapTapManager; }
namespace MiHoYo::SDK::Win { class TapTapManager_OnLoginDelegate; }
namespace MiHoYo::SDK::Win { class TapTapToken; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_TAPTAPMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDF9580)
#define MIHOYO_SDK_WIN_TAPTAPMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF9570)
#define MIHOYO_SDK_WIN_TAPTAPMANAGER_GETACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1BDF9550)
#define MIHOYO_SDK_WIN_TAPTAPMANAGER_GETSHOWNAME_OFFSET UNITYSDK_OFFSET(0x1BDF9560)
#define MIHOYO_SDK_WIN_TAPTAPMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1BDF94E0)
#define MIHOYO_SDK_WIN_TAPTAPMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x1BDF94F0)

namespace MiHoYo::SDK::Win
{
	class TapTapManager : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::TapTapManager_OnLoginDelegate* OnTapTapLogin; // 0x10
		static ::MiHoYo::SDK::Win::TapTapManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::TapTapManager**)UnitySDK::FromName("MiHoYo.SDK.Win", "TapTapManager")->GetStaticField(0x19C20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Login()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_LOGIN_OFFSET))(this);
		}

		::MiHoYo::SDK::Win::TapTapToken* GetAccessToken()
		{
			return ((::MiHoYo::SDK::Win::TapTapToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_GETACCESSTOKEN_OFFSET))(this);
		}

		::System::String* GetShowName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_GETSHOWNAME_OFFSET))(this);
		}

	};
}
