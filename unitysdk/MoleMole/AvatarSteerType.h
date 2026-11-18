#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AvatarSteerType_TypeDefinitionIndex = 72371;

	enum class AvatarSteerType : ::System::Byte
	{
		Fixed = 2,
		Clamp = 1,
		Instant = 0,
	};
}
