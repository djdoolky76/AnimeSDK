#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_B8F9CF711F3AD029__CTOR_OFFSET UNITYSDK_OFFSET(0x3FA5290)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputDevice_B8F9CF711F3AD029_TypeDefinitionIndex = 14327;

	struct alignas(4) InputDevice_B8F9CF711F3AD029
	{
		::System::UInt16 FD77E8E4A681AD73; // 0x10
		::System::Int16 E2C24FDBEBE39754; // 0x12
		::System::UInt16 FCB22AA1FFBBFFBF; // 0x14
		::System::Byte F62D5275AACEB196; // 0x16

		::System::Void _ctor(::System::UInt16 FA076EACE9148B27)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_B8F9CF711F3AD029__CTOR_OFFSET))(this, FA076EACE9148B27);
		}
	};
}
