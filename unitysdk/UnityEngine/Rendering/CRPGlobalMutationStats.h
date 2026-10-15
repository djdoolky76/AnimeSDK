#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/CRPPassGlobalMutationStats.h"

namespace UnityEngine::Rendering
{
	struct alignas(8) CRPGlobalMutationStats
	{
		::Il2CppArray<::UnityEngine::Rendering::CRPPassGlobalMutationStats>* passes; // 0x10
	};
}
