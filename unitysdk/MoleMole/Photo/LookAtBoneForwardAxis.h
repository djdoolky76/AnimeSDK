#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int LookAtBoneForwardAxis_TypeDefinitionIndex = 47082;

	enum class LookAtBoneForwardAxis : ::System::Int32
	{
		Down = 3,
		Right = 5,
		Backward = 1,
		Up = 2,
		Left = 4,
		Forward = 0,
	};
}
