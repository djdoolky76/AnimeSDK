#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaMixerBehaviour_E5875CA99E4FEC6D_TypeDefinitionIndex = 19155;

	enum class CriManaMixerBehaviour_E5875CA99E4FEC6D : ::System::Int32
	{
		Preloading = 0,
		Ready = 1,
		Playing = 2,
		Stopping = 3,
		Stopped = 4,
	};
}
