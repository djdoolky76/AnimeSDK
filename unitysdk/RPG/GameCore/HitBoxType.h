#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HitBoxType_TypeDefinitionIndex = 56853;

	enum class HitBoxType : ::System::Byte
	{
		eNone = 0,
		eBox3 = 1,
		eCapsule3 = 2,
	};
}
