#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_MOUSEOVEREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD0B60)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseOverEvent_TypeDefinitionIndex = 5977;

	class MouseOverEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEOVEREVENT_CTOR_OFFSET))(this);
		}

	};
}
