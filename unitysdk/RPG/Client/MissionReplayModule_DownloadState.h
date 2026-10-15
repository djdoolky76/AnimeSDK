#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MissionReplayModule_DownloadState : ::System::Int32
	{
		START = 0,
		DOWNLOADING = 1,
		FINISH = 2,
	};
}
