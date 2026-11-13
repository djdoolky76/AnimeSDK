#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_MOUSECAPTUREOUTEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFCF510)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseCaptureOutEvent_TypeDefinitionIndex = 5922;

	class MouseCaptureOutEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTUREOUTEVENT_CTOR_OFFSET))(this);
		}

	};
}
