#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_MOUSEOUTEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4BB820)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseOutEvent_TypeDefinitionIndex = 5970;

	class MouseOutEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEOUTEVENT_CTOR_OFFSET))(this);
		}

	};
}
