#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_Step_TypeDefinitionIndex = 62279;

	enum class DownloadDiffPatcher_Step : ::System::Byte
	{
		Move = 3,
		DiffPatch = 2,
		Finish = 4,
		Collect = 1,
		Init = 0,
	};
}
