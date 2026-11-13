#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MJJODNBEHKN_SequencePhase_TypeDefinitionIndex = 74948;

	enum class MJJODNBEHKN_SequencePhase : ::System::Int32
	{
		Idle = 0,
		PreparingInitial = 1,
		Start = 2,
		Loop = 3,
		End = 4,
		Completed = 5,
		Failed = 6,
		Disposed = 7,
	};
