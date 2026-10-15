#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent.h"

#define UNITYENGINE_UI_BUTTON_BUTTONCLICKEDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4DF830)

namespace UnityEngine::UI
{
	class Button_ButtonClickedEvent : public ::UnityEngine::Events::UnityEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_BUTTONCLICKEDEVENT_CTOR_OFFSET))(this);
		}

	};
}
