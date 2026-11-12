#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_VALIDATECOMMANDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x20777BB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ValidateCommandEvent_TypeDefinitionIndex = 5927;

	class ValidateCommandEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VALIDATECOMMANDEVENT_CTOR_OFFSET))(this);
		}

	};
}
