#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_TOGGLE_TOGGLESELECTEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F55EBD0)

namespace UnityEngine::UI
{
	class Toggle_ToggleSelectEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_TOGGLESELECTEVENT_CTOR_OFFSET))(this);
		}

	};
}
