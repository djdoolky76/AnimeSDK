#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_VALIDATECOMMANDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4C7D60)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ValidateCommandEvent_TypeDefinitionIndex = 5919;

	class ValidateCommandEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VALIDATECOMMANDEVENT_CTOR_OFFSET))(this);
		}

	};
}
