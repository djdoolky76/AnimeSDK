#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class BundleLocalType : ::System::Int32
	{
		eAsset = 0,
		eAudio = 1,
		eVideo = 2,
		eDesignData = 3,
		eLua = 4,
	};
}
