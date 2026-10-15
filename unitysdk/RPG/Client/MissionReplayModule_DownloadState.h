#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MissionReplayModule_DownloadState_TypeDefinitionIndex = 66206;

	enum class MissionReplayModule_DownloadState : ::System::Int32
	{
		START = 0,
		DOWNLOADING = 1,
		FINISH = 2,
	};
}
