#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowErrorDialogResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0xAFA13D0)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS23_0__ONSHOWERRORDIALOGCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xAFA1990)

namespace MiHoYo::SDK
{
	class HoYoChannelSystemFunctions___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::String* jsonResponse; // 0x10
		::System::Action* callback; // 0x18
		::System::Int32 resultCode; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnShowErrorDialogCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS___C__DISPLAYCLASS23_0__ONSHOWERRORDIALOGCALLBACK_B__0_OFFSET))(this);
		}

	};
}
