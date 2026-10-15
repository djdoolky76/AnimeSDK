#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS49_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD91700)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS49_0__LOGIN_WILL_ENTER_GAME_B__0_OFFSET UNITYSDK_OFFSET(0x1BD99000)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MiHoYoSDKDll___c__DisplayClass49_0_TypeDefinitionIndex = 9438;

	class MiHoYoSDKDll___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::String* jsonString; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS49_0_CTOR_OFFSET))(this);
		}

		::System::Void _login_will_enter_game_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS49_0__LOGIN_WILL_ENTER_GAME_B__0_OFFSET))(this, a1);
		}

	};
}
