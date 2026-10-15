#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BlockFlag_TypeDefinitionIndex = 41486;

	enum class BlockFlag : ::System::UInt16
	{
		SUBPACK_STARTUP = 0,
		SUBPACK_BASE_PLAY = 1,
		SUBPACK_BASE_PLAY_EXT = 2,
		SUBPACK_FEATURE = 3,
		SUBPACK_DISCARD_DIRECTORY_NOT_BUILD_ASB = 4,
		SUBPACK_DISCARD_SELF_AND_DEPENDENCY = 5,
		SUBPACK_UNUSE_6 = 6,
		SUBPACK_UNUSE_7 = 7,
		SUBPACK_MARK = 7,
		ASSETS_IN_APP = 8,
		Patch = 16,
	};
}
