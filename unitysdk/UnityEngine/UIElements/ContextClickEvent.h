#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_CONTEXTCLICKEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x2075EAA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ContextClickEvent_TypeDefinitionIndex = 5971;

	class ContextClickEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CONTEXTCLICKEVENT_CTOR_OFFSET))(this);
		}

	};
}
