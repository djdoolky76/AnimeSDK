#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_PinballCollisionResolveResult_TypeDefinitionIndex = 56746;

	struct alignas(4) PinballSubsystem_PinballCollisionResolveResult
	{
		::UnityEngine::Vector3 MoverFrameVelocity; // 0x10
		::System::Boolean PreserveMoverPath; // 0x1C
	};
}
