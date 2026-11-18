#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int RhythmEventType_TypeDefinitionIndex = 54621;

	enum class RhythmEventType : ::System::Int32
	{
		ShowSpeedUpText = 6,
		FinishLevel = 2,
		SwitchGuideSound = 4,
		ResetPattern = 1,
		PlayEffect = 3,
		ClassicBeat = 0,
		ShowLongPressText = 7,
		SwitchInteractSound = 5,
		InteractEvent = 99,
		SoundEvent = 98,
	};
}
