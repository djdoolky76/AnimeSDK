#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_DRAGPERFORMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A9C40)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragPerformEvent_TypeDefinitionIndex = 27522;

	class DragPerformEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGPERFORMEVENT__CTOR_OFFSET))(this);
		}
	};
}
