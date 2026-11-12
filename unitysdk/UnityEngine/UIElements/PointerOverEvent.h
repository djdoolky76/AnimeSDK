#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTEROVEREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x2076FF50)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerOverEvent_TypeDefinitionIndex = 5995;

	class PointerOverEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEROVEREVENT_CTOR_OFFSET))(this);
		}

	};
}
