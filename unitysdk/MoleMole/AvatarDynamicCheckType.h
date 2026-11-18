#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AvatarDynamicCheckType_TypeDefinitionIndex = 66503;

	enum class AvatarDynamicCheckType : ::System::Int32
	{
		TeamAvatar = 2,
		LocalAvatar = 1,
		None = 0,
		AllAvatar = 3,
	};
}
