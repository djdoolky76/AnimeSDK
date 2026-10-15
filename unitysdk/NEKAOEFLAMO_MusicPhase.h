#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NEKAOEFLAMO_MusicPhase_TypeDefinitionIndex = 60161;

	enum class NEKAOEFLAMO_MusicPhase : ::System::Int32
	{
		Ready = 0,
		CountDown = 1,
		Transition = 2,
		Play = 3,
		WaitFinish = 4,
		ShowFinishUi = 5,
		WaitResult = 6,
		Finish = 7,
	};
