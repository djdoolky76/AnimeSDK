#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_TOGGLE_TOGGLEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x2068E510)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Toggle_ToggleEvent_TypeDefinitionIndex = 6878;

	class Toggle_ToggleEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_TOGGLEEVENT_CTOR_OFFSET))(this);
		}

	};
}
