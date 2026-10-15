#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class BundleType : ::System::Int32
	{
		eAssetBundle = 0,
		eDesignDataBundle = 1,
		eLuaBundle = 2,
		eAudioBundle = 3,
		eVideoBundle = 4,
		eMergedBlock = 5,
	};
}
