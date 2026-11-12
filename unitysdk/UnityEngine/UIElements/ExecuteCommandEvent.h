#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UIELEMENTS_EXECUTECOMMANDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x20764140)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ExecuteCommandEvent_TypeDefinitionIndex = 5928;

	class ExecuteCommandEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXECUTECOMMANDEVENT_CTOR_OFFSET))(this);
		}

	};
}
