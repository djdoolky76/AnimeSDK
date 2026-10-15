#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::AI
{
	struct alignas(4) NavMeshBuildDebugSettings
	{
		::System::Byte m_Flags; // 0x10
	};
}
