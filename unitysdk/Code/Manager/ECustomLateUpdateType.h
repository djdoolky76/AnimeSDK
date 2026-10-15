#pragma once
#include "unitysdk/unitysdk.h"

namespace Code::Manager
{
	enum class ECustomLateUpdateType : ::System::Int32
	{
		ResetEmoEye = 0,
		Emo = 1,
		BoardAudio = 2,
		DynamicWave = 3,
		Possession = 4,
		Puzzle = 5,
		SpringBoneInGameThread = 6,
		Max = 7,
	};
}
