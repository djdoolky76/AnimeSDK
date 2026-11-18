#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectPatternInfoConfig_ParticleSystemFreqMode_TypeDefinitionIndex = 64160;

	enum class EffectPatternInfoConfig_ParticleSystemFreqMode : ::System::Byte
	{
		kFreqModeKeepSpeed = 2,
		kFreqModeSpeedScaling = 1,
		None = 0,
	};
}
