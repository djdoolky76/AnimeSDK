#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ArcanaType_TypeDefinitionIndex = 85212;

	enum class ArcanaType : ::System::Int32
	{
		BeatBack = 3,
		Shield = 1,
		FireBall = 2,
		FieldRange = 4,
	};
}
