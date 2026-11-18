#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int NapEffectSimulatorComponent_NKHBCEHBCDP_TypeDefinitionIndex = 78460;

	enum class NapEffectSimulatorComponent_NKHBCEHBCDP : ::System::Int32
	{
		EndNormalState = 2,
		TemplateFadeOut = 4,
		StopComplete = 8,
		ToInactive = 16,
		MakeNodeStart = 1,
		ESForceOnMainThread = 64,
		CantSendValInJob = 32,
		None = 0,
	};
}
