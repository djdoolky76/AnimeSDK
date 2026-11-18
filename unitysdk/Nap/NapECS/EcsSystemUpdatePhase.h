#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsSystemUpdatePhase_TypeDefinitionIndex = 36039;

	enum class EcsSystemUpdatePhase : ::System::Byte
	{
		AnimIKPostUpdate = 11,
		WaitForFixedUpdateAgain = 9,
		WaitForFixedUpdate = 8,
		LateUpdateAgain = 3,
		PostSimulationUpdate = 13,
		Max = 14,
		PostLateUpdate = 4,
		None = 0,
		FixedUpdateAgain = 6,
		EndOfFixedUpdate = 10,
		Update = 1,
		AfterAnimatorFixedUpdate = 7,
		LateUpdate = 2,
		PostParticleSystemUpdate = 12,
		FixedUpdate = 5,
	};
}
