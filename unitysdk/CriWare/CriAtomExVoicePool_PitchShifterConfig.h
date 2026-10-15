#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	struct alignas(4) CriAtomExVoicePool_PitchShifterConfig
	{
		::System::Int32 mode; // 0x10
		::System::Int32 windowSize; // 0x14
		::System::Int32 overlapTimes; // 0x18
	};
}
