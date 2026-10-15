#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	enum class CriAtomEx_Format : ::System::UInt32
	{
		ADX = 1,
		HCA = 3,
		HCA_MX = 4,
		WAVE = 5,
		RAW_PCM = 6,
		AUDIO_BUFFER = 9,
		HW1 = 65537,
		HW2 = 65538,
		HW3 = 65539,
		MP3 = 65539,
	};
}
