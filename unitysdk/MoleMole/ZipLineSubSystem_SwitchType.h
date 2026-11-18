#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_SwitchType_TypeDefinitionIndex = 92013;

	enum class ZipLineSubSystem_SwitchType : ::System::Int32
	{
		None = 0,
		OtherAvatar = 3,
		PlusOneAvatar = 2,
		TeamAvatar = 1,
	};
}
