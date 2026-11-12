#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS47_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF1520)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS47_0__REFRESHACCOUNTINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1CF065C0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS47_0__REFRESHACCOUNTINFO_B__1_OFFSET UNITYSDK_OFFSET(0x1CF05FF0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass47_0_TypeDefinitionIndex = 9456;

	class LoginManager___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS47_0_CTOR_OFFSET))(this);
		}

		::System::Void _RefreshAccountInfo_b__1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS47_0__REFRESHACCOUNTINFO_B__1_OFFSET))(this, a1);
		}

		::System::Void _RefreshAccountInfo_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS47_0__REFRESHACCOUNTINFO_B__0_OFFSET))(this, a1);
		}

	};
}
