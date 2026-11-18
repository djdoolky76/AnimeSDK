#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int AssetWarmupConfig_TypeDefinitionIndex = 42507;

	struct alignas(4) AssetWarmupConfig
	{
		::Foundation::AssetPath preloadPaths; // 0x10
		::System::Int32 warmupCount; // 0x20
	};
}
