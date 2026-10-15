#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int DADCLCMLNNF_PlayState_TypeDefinitionIndex = 71349;

	enum class DADCLCMLNNF_PlayState : ::System::Int32
	{
		NotPlay = 0,
		EntrancePlaying = 1,
		EntrancePlayEnd = 2,
		ExitPlaying = 3,
		ExitPlayEnd = 4,
	};
