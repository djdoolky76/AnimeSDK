#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PLUGINUI_UICONSTANTS_CTOR_OFFSET UNITYSDK_OFFSET(0xB02DFB0)

namespace MiHoYo::SDK::PluginUI
{
	class UIConstants : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_UICONSTANTS_CTOR_OFFSET))(this);
		}

	};
}
