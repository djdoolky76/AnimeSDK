#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationSpotLightFilter_RoleFilterType_TypeDefinitionIndex = 66235;

	enum class GridFightGameFormationSpotLightFilter_RoleFilterType : ::System::Int32
	{
		None = 0,
		Suitable = 1,
		AllRoles = 2,
		Unsuitable = 3,
	};
}
