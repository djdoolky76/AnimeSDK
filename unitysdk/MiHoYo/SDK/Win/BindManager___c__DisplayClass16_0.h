#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCEAD40)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS16_0__ACCOUNTPLATBIND_B__0_OFFSET UNITYSDK_OFFSET(0x1BCF3770)

namespace MiHoYo::SDK::Win
{
	class BindManager___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Void _AccountPlatBind_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS16_0__ACCOUNTPLATBIND_B__0_OFFSET))(this, a1);
		}

	};
}
