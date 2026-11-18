#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageController_UIRoleInfo_SubType_TypeDefinitionIndex = 52899;

	enum class UIRoleInfoPageController_UIRoleInfo_SubType : ::System::Int32
	{
		EQUIP = 2,
		SKILL = 1,
		BASIC = 0,
		COUNT = 3,
		NONE = -1,
	};
}
