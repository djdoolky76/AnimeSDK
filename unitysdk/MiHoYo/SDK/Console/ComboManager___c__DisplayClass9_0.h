#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_COMBOMANAGER___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC7A1E0)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER___C__DISPLAYCLASS9_0__LOGOUTWITHGAMENOTIFICATION_B__0_OFFSET UNITYSDK_OFFSET(0x1BC7DE90)

namespace MiHoYo::SDK::Console
{
	class ComboManager___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void _LogoutWithGameNotification_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER___C__DISPLAYCLASS9_0__LOGOUTWITHGAMENOTIFICATION_B__0_OFFSET))(this, a1);
		}

	};
}
