#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTEROUTEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x2076FF10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerOutEvent_TypeDefinitionIndex = 5996;

	class PointerOutEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEROUTEVENT_CTOR_OFFSET))(this);
		}

	};
}
