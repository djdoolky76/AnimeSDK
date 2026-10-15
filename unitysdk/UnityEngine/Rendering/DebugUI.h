#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_DEBUGUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2BD130)

namespace UnityEngine::Rendering
{
	class DebugUI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_CTOR_OFFSET))(this);
		}

	};
}
