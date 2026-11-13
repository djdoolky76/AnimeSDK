#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_KEYDOWNEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFCDEA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int KeyDownEvent_TypeDefinitionIndex = 5960;

	class KeyDownEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYDOWNEVENT_CTOR_OFFSET))(this);
		}

	};
}
