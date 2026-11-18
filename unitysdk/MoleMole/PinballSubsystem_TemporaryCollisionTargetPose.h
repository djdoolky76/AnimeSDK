#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_TemporaryCollisionTargetPose_TypeDefinitionIndex = 56768;

	struct alignas(8) PinballSubsystem_TemporaryCollisionTargetPose
	{
		::UnityEngine::Transform* Transform; // 0x10
		::UnityEngine::Vector3 Position; // 0x18
	};
}
