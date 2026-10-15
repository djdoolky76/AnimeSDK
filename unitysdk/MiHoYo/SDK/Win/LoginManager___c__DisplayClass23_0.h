#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD64D70)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS23_0__LOGOUT_B__0_OFFSET UNITYSDK_OFFSET(0x1BD7BCD0)

namespace MiHoYo::SDK::Win
{
	class LoginManager___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void _Logout_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS23_0__LOGOUT_B__0_OFFSET))(this, a1);
		}

	};
}
