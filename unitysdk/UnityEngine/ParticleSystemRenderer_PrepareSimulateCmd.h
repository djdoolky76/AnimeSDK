#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemRenderer_PrepareSimulateCmd_TypeDefinitionIndex = 7770;

	struct alignas(4) ParticleSystemRenderer_PrepareSimulateCmd
	{
		::System::Single DeltaTime; // 0x10
		::UnityEngine::Matrix4x4 OverrideMatrix; // 0x14
	};
}
