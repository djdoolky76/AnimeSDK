#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PerformanceTools
{
	inline static constexpr unsigned int CpuProfileUploadState_TypeDefinitionIndex = 76181;

	enum class CpuProfileUploadState : ::System::Int32
	{
		Idle = 0,
		Uploading = 1,
		CompletedUnverified = 2,
		Interrupted = 3,
	};
}
