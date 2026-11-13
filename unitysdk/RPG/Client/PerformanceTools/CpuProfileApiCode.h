#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PerformanceTools
{
	inline static constexpr unsigned int CpuProfileApiCode_TypeDefinitionIndex = 76180;

	enum class CpuProfileApiCode : ::System::Int32
	{
		Ok = 0,
		NoChange = 1,
		PartialSuccess = 2,
		Unsupported = 3,
		NotInitialized = 4,
		InvalidArgument = 5,
		WrongThread = 6,
		NotPlaying = 7,
		Busy = 8,
		Unavailable = 9,
		ConfigurationRejected = 10,
		Failed = 11,
	};
}
