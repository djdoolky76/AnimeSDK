#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PluginUI { class IPluginUIService; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF826B0)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS5_0__TRYGETELEMENTACTION_B__0_OFFSET UNITYSDK_OFFSET(0x1BF82E10)

namespace MiHoYo::SDK::PluginUI
{
	class IPluginUIService___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::String* strElementID; // 0x10
		::MiHoYo::SDK::PluginUI::IPluginUIService* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _TryGetElementAction_b__0(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS5_0__TRYGETELEMENTACTION_B__0_OFFSET))(this, a1, a2);
		}

	};
}
