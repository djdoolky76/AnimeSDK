#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREOUTEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD3D10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerCaptureOutEvent_TypeDefinitionIndex = 5919;

	class PointerCaptureOutEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREOUTEVENT_CTOR_OFFSET))(this);
		}

	};
}
