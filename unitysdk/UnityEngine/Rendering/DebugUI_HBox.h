#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Container.h"

#define UNITYENGINE_RENDERING_DEBUGUI_HBOX_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C02B0)

namespace UnityEngine::Rendering
{
	class DebugUI_HBox : public ::UnityEngine::Rendering::DebugUI_Container
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_HBOX_CTOR_OFFSET))(this);
		}

	};
}
