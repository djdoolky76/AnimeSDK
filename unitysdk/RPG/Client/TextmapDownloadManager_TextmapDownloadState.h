#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class TextmapDownloadManager_TextmapDownloadState : ::System::Int32
	{
		Idle = 0,
		Downloading = 1,
	};
}
