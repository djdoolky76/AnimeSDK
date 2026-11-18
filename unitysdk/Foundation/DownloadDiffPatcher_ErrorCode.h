#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_ErrorCode_TypeDefinitionIndex = 62278;

	enum class DownloadDiffPatcher_ErrorCode : ::System::SByte
	{
		Succ = 0,
		FileInvalid = -4,
		CollectError = -1,
		HDiffException = -2,
		VerifyError = -3,
	};
}
