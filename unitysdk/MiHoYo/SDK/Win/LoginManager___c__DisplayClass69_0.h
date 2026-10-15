#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS69_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD6E000)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS69_0__SHOWACCOUNTLISTCONFIRMPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x1BD80550)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS69_0__SHOWACCOUNTLISTCONFIRMPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x1BD80600)

namespace MiHoYo::SDK::Win
{
	class LoginManager___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS69_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowAccountListConfirmPluginUI_b__0(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS69_0__SHOWACCOUNTLISTCONFIRMPLUGINUI_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountListConfirmPluginUI_b__1(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS69_0__SHOWACCOUNTLISTCONFIRMPLUGINUI_B__1_OFFSET))(this, a1, a2);
		}

	};
}
