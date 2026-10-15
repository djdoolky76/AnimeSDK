#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_SCROLLRECT_SCROLLRECTEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F540CE0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ScrollRect_ScrollRectEvent_TypeDefinitionIndex = 6828;

	class ScrollRect_ScrollRectEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLRECT_SCROLLRECTEVENT_CTOR_OFFSET))(this);
		}

	};
}
