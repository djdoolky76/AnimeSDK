#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ATTITUDESTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x946920)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ATTITUDESTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x1EFF23E0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int AttitudeState_TypeDefinitionIndex = 31960;

	struct alignas(4) AttitudeState
	{
		::UnityEngine::Quaternion attitude; // 0x10

		static ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ATTITUDESTATE_GET_KFORMAT_OFFSET))();
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ATTITUDESTATE_GET_FORMAT_OFFSET))(this);
		}
	};
}
