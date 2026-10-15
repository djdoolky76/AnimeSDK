#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshBuildDebugSettings_TypeDefinitionIndex = 5665;

	struct alignas(4) NavMeshBuildDebugSettings
	{
		::System::Byte m_Flags; // 0x10
	};
}
