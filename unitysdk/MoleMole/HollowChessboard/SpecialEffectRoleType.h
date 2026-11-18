#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int SpecialEffectRoleType_TypeDefinitionIndex = 52552;

	enum class SpecialEffectRoleType : ::System::Int32
	{
		Open = 2,
		Normal = 0,
		Switch = 3,
		Close = 1,
		Special = 4,
	};
}
