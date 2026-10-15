#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4BDA10)

namespace UnityEngine::UIElements
{
	class PointerCaptureEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENT_CTOR_OFFSET))(this);
		}

	};
}
