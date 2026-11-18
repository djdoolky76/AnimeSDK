#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_ATTACHTOPANELEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A4D50)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int AttachToPanelEvent_TypeDefinitionIndex = 27569;

	class AttachToPanelEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ATTACHTOPANELEVENT__CTOR_OFFSET))(this);
		}
	};
}
