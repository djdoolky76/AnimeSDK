#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/UnloadPhase.h"
#include "unitysdk/System/ValueType.h"

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int ConfigModuleManager_PhasesCache_TypeDefinitionIndex = 8194;

	struct alignas(4) ConfigModuleManager_PhasesCache
	{
		::ConfigModuleLib::Runtime::LoadPhase Load; // 0x10
		::ConfigModuleLib::Runtime::UnloadPhase Unload; // 0x14
	};
}
