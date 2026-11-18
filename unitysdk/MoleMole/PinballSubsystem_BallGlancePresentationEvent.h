#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_BallGlancePresentationEvent_TypeDefinitionIndex = 56734;

	struct alignas(4) PinballSubsystem_BallGlancePresentationEvent
	{
		::MoleMole::EntityHandle Ball; // 0x10
		::UnityEngine::Vector3 IncomingVelocity; // 0x20
		::UnityEngine::Vector3 ResolvedVelocity; // 0x2C
		::UnityEngine::Vector3 Normal; // 0x38
	};
}
