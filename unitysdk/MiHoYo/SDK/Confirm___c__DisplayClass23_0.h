#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class Confirm_OnConfirmDelegate; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_CONFIRM___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5D420)
#define MIHOYO_SDK_CONFIRM___C__DISPLAYCLASS23_0__SHOWPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x1BC5DB10)
#define MIHOYO_SDK_CONFIRM___C__DISPLAYCLASS23_0__SHOWPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x1BC5DB80)

namespace MiHoYo::SDK
{
	class Confirm___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Confirm_OnConfirmDelegate* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowPluginUI_b__0(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM___C__DISPLAYCLASS23_0__SHOWPLUGINUI_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowPluginUI_b__1(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM___C__DISPLAYCLASS23_0__SHOWPLUGINUI_B__1_OFFSET))(this, a1, a2);
		}

	};
}
