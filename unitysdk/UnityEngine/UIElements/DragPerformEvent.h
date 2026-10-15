#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_DRAGPERFORMEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4AF5C0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragPerformEvent_TypeDefinitionIndex = 5927;

	class DragPerformEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGPERFORMEVENT_CTOR_OFFSET))(this);
		}

	};
}
