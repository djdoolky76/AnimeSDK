#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_DEBUGUI_BOOLFIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2A1E00)

namespace UnityEngine::Rendering
{
	class DebugUI_BoolField
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BOOLFIELD_CTOR_OFFSET))(this);
		}

	};
}
