#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AstraFXSettings_TypeDefinitionIndex = 4852;

	struct alignas(4) AstraFXSettings
	{
		::System::Boolean EnableAstraFX; // 0x10
		::System::Boolean EnableMeshModifier; // 0x11
	};
}
