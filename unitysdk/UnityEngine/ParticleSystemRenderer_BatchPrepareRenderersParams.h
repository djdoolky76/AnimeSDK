#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemRenderer_BatchPrepareRenderersParams_TypeDefinitionIndex = 7772;

	struct alignas(4) ParticleSystemRenderer_BatchPrepareRenderersParams
	{
		::System::IntPtr JobDatas; // 0x10
		::System::IntPtr SimulateCmds; // 0x18
		::System::Int32 JobCount; // 0x20
		::System::Single DeltaTime; // 0x24
		::System::Single UnscaledDeltaTime; // 0x28
	};
}
