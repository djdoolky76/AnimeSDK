#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int ELODLevel_TypeDefinitionIndex = 64783;

	enum class ELODLevel : ::System::UInt32
	{
		LOD2 = 2,
		Undefined = 7,
		LOD3 = 3,
		LOD1 = 1,
		LOD0 = 0,
		EnumSize = 5,
		LOD4 = 4,
	};
}
