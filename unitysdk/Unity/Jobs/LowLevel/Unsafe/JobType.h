#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Jobs::LowLevel::Unsafe
{
	enum class JobType : ::System::Int32
	{
		Single = 0,
		ParallelFor = 1,
	};
}
