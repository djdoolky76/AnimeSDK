#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTEROVEREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4C00D0)

namespace UnityEngine::UIElements
{
	class PointerOverEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEROVEREVENT_CTOR_OFFSET))(this);
		}

	};
}
