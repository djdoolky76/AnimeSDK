#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_PaddleStrikeCandidateKind_TypeDefinitionIndex = 56762;

	enum class PinballSubsystem_PaddleStrikeCandidateKind : ::System::Int32
	{
		LocalRightCatch = 2,
		SurfaceContact = 1,
		None = 0,
	};
}
