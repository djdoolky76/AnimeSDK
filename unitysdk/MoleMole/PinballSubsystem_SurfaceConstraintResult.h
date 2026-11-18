#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PinballSubsystem_SurfaceConstraintState.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_SurfaceConstraintResult_TypeDefinitionIndex = 56736;

	struct alignas(4) PinballSubsystem_SurfaceConstraintResult
	{
		::MoleMole::PinballSubsystem_SurfaceConstraintState Constraint; // 0x10
		::UnityEngine::Vector3 IncomingVelocity; // 0x40
		::UnityEngine::Vector3 BaseVelocity; // 0x4C
		::UnityEngine::Vector3 AccelerationDelta; // 0x58
		::UnityEngine::Vector3 ResolvedVelocity; // 0x64
		::System::Boolean HasAcceleration; // 0x70
	};
}
