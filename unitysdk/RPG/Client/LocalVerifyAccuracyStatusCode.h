#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class LocalVerifyAccuracyStatusCode : ::System::Int32
	{
		eSuccess = 0,
		eErrorAssetInPak = 1,
		eErrorAssetDownload = 2,
	};
}
