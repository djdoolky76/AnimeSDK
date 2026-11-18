#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowEntityConfig_CampType_TypeDefinitionIndex = 57920;

	enum class HollowEntityConfig_CampType : ::System::Int32
	{
		TeamNeutral = 3,
		Unknow = 999,
		TeamKind = 4,
		TeamEvil = 1,
		TeamGood = 2,
	};
}
