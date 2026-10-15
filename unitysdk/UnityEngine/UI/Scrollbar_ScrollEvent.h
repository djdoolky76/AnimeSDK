#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_SCROLLBAR_SCROLLEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F548350)

namespace UnityEngine::UI
{
	class Scrollbar_ScrollEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SCROLLEVENT_CTOR_OFFSET))(this);
		}

	};
}
