#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceDescription.h"

inline static constexpr unsigned int E19F494AEFDF326B_AvailableDevice_TypeDefinitionIndex = 14589;

struct alignas(4) E19F494AEFDF326B_AvailableDevice
{
	::UnityEngine::InputSystem::Layouts::InputDeviceDescription description; // 0x10
	::System::Int32 deviceId; // 0x48
	::System::Boolean isNative; // 0x4C
	::System::Boolean isRemoved; // 0x4D
};
