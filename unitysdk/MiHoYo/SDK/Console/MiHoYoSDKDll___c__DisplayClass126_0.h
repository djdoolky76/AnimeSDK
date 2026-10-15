#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__DISPLAYCLASS126_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCA38C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__DISPLAYCLASS126_0__CONSOLE_GET_FRIEND_LIST_B__0_OFFSET UNITYSDK_OFFSET(0x1BCA5A20)

namespace MiHoYo::SDK::Console
{
	class MiHoYoSDKDll___c__DisplayClass126_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__DISPLAYCLASS126_0_CTOR_OFFSET))(this);
		}

		::System::Void _console_get_friend_list_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__DISPLAYCLASS126_0__CONSOLE_GET_FRIEND_LIST_B__0_OFFSET))(this, a1);
		}

	};
}
