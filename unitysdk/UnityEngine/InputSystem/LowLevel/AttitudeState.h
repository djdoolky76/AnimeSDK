#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/AFB530854B88B5A8.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ATTITUDESTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x3FDD190)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ATTITUDESTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x3FDD1D0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int AttitudeState_TypeDefinitionIndex = 14495;

	struct alignas(4) AttitudeState
	{
		::UnityEngine::Quaternion attitude; // 0x10

		static ::AFB530854B88B5A8 get_kFormat()
		{
			return ((::AFB530854B88B5A8(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ATTITUDESTATE_GET_KFORMAT_OFFSET))();
		}

		::AFB530854B88B5A8 get_format()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ATTITUDESTATE_GET_FORMAT_OFFSET))(this);
		}
	};
}
