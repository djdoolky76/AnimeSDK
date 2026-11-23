#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/AFB530854B88B5A8.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GYROSCOPESTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x4004790)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GYROSCOPESTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x40047D0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int GyroscopeState_TypeDefinitionIndex = 14585;

	struct alignas(4) GyroscopeState
	{
		::UnityEngine::Vector3 angularVelocity; // 0x10

		static ::AFB530854B88B5A8 get_kFormat()
		{
			return ((::AFB530854B88B5A8(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GYROSCOPESTATE_GET_KFORMAT_OFFSET))();
		}

		::AFB530854B88B5A8 get_format()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GYROSCOPESTATE_GET_FORMAT_OFFSET))(this);
		}
	};
}
