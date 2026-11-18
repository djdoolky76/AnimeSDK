#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitAnimDirectionType_TypeDefinitionIndex = 84769;

	enum class HitAnimDirectionType : ::System::Int32
	{
		HitRight = 3,
		HitLeft = 2,
		HitUp = 0,
		HitDown = 1,
	};
}
