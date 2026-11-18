#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_DETACHFROMPANELEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A96B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DetachFromPanelEvent_TypeDefinitionIndex = 27570;

	class DetachFromPanelEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DETACHFROMPANELEVENT__CTOR_OFFSET))(this);
		}
	};
}
