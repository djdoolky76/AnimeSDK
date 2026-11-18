#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooPlayHUDType_TypeDefinitionIndex = 47788;

	enum class BangbooPlayHUDType : ::System::Int32
	{
		BangbooAndRoleHud = 3,
		None = 0,
		OnlyBangboo = 1,
		OnlyRoleHud = 2,
		HideAll = 4,
	};
}
