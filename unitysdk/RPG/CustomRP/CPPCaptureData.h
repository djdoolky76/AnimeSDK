#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/CRPGlobalMutationStats.h"

namespace RPG::CustomRP
{
	struct alignas(4) CPPCaptureData
	{
		::UnityEngine::Rendering::CRPGlobalMutationStats globalMutationStats; // 0x10
	};
}
