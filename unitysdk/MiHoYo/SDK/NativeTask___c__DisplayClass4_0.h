#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NativeTask; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_NATIVETASK___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA5EB0)
#define MIHOYO_SDK_NATIVETASK___C__DISPLAYCLASS4_0__NATIVEINVOKE_B__0_OFFSET UNITYSDK_OFFSET(0x1BEA6270)

namespace MiHoYo::SDK
{
	class NativeTask___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MiHoYo::SDK::NativeTask* __4__this; // 0x18
		::System::String* funcName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NATIVETASK___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _NativeInvoke_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NATIVETASK___C__DISPLAYCLASS4_0__NATIVEINVOKE_B__0_OFFSET))(this, a1);
		}

	};
}
