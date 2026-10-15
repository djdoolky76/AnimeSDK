#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_TOGGLE_TOGGLESELECTEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F530E10)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Toggle_ToggleSelectEvent_TypeDefinitionIndex = 6868;

	class Toggle_ToggleSelectEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_TOGGLESELECTEVENT_CTOR_OFFSET))(this);
		}

	};
}
