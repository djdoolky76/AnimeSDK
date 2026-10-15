#pragma once
#include "unitysdk/unitysdk.h"
	enum class AkWindowsSettings_PlatformAdvancedSettings_AudioAPI : ::System::Int32
	{
		None = 0,
		Wasapi = 1,
		XAudio2 = 2,
		DirectSound = 4,
		Default = -1,
	};
