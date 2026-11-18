#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MissionResult_TypeDefinitionIndex = 79861;

	enum class MissionResult : ::System::Byte
	{
		Cooper_B = 2,
		Plastics_C = 1,
		SS = 5,
		Silver_A = 3,
		Fail = 0,
		Gold_S = 4,
	};
}
