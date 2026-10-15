#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_TOGGLE_TOGGLEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F55EBC0)

namespace UnityEngine::UI
{
	class Toggle_ToggleEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_TOGGLEEVENT_CTOR_OFFSET))(this);
		}

	};
}
