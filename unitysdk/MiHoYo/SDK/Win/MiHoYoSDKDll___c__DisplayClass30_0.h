#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS30_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD8DE50)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS30_0__INIT_B__0_OFFSET UNITYSDK_OFFSET(0x1BD98EB0)

namespace MiHoYo::SDK::Win
{
	class MiHoYoSDKDll___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS30_0_CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS30_0__INIT_B__0_OFFSET))(this, a1);
		}

	};
}
