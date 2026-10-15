#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_KEYUPEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F48AD70)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int KeyUpEvent_TypeDefinitionIndex = 5953;

	class KeyUpEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYUPEVENT_CTOR_OFFSET))(this);
		}

	};
}
