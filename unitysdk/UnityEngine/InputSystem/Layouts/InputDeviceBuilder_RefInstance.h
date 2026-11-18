#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_REFINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x938E90)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputDeviceBuilder_RefInstance_TypeDefinitionIndex = 32067;

	struct alignas(4) InputDeviceBuilder_RefInstance
	{
		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_REFINSTANCE_DISPOSE_OFFSET))(this);
		}
	};
}
