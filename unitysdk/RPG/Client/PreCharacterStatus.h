#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PreCharacterStatus_TypeDefinitionIndex = 66704;

	enum class PreCharacterStatus : ::System::UInt32
	{
		INVALID = 0,
		PRE_RELEASE = 1,
		ALREADY_POSSESS = 2,
		NOT_YET_POSSESS = 3,
		OUT_OF_RELEASE = 4,
	};
}
