#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_MOUSECAPTUREEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4BA180)

namespace UnityEngine::UIElements
{
	class MouseCaptureEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTUREEVENT_CTOR_OFFSET))(this);
		}

	};
}
