#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_RuntimeBallActivationData_TypeDefinitionIndex = 56766;

	struct alignas(4) PinballSubsystem_RuntimeBallActivationData
	{
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Vector3 Velocity; // 0x1C
		::System::Single Lifetime; // 0x28
	};
}
