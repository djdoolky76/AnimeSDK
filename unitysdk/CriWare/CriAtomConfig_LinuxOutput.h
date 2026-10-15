#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	enum class CriAtomConfig_LinuxOutput : ::System::Int32
	{
		Default = 0,
		PulseAudio = 1,
		ALSA = 2,
	};
}
