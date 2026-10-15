#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefUnionIndex_UnionKind_TypeDefinitionIndex = 67546;

	enum class RogueTournBuildRefUnionIndex_UnionKind : ::System::Byte
	{
		Empty = 0,
		HttpId = 1,
		ShareCodeArchiveSlotId = 2,
	};
}
