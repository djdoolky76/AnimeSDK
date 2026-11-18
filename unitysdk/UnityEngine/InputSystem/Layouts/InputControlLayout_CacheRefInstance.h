#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CACHEREFINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x919210)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_CacheRefInstance_TypeDefinitionIndex = 32063;

	struct alignas(4) InputControlLayout_CacheRefInstance
	{
		::System::Boolean valid; // 0x10

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CACHEREFINSTANCE_DISPOSE_OFFSET))(this);
		}
	};
}
