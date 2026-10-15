#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTEROUTEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4C0090)

namespace UnityEngine::UIElements
{
	class PointerOutEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEROUTEVENT_CTOR_OFFSET))(this);
		}

	};
}
