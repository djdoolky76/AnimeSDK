#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PLUGINUI_PLUGINUICONSTANTS_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF86D80)

namespace MiHoYo::SDK::PluginUI
{
	class PluginUIConstants : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONSTANTS_CTOR_OFFSET))(this);
		}

	};
}
