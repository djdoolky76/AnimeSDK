#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class AudioManager_AudioDownloadState : ::System::Int32
	{
		START = 0,
		DOWNLOAD = 1,
		FINISH = 2,
	};
}
