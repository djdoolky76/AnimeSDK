#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ParallelLoopResult_TypeDefinitionIndex = 893;

	struct alignas(8) ParallelLoopResult
	{
		::System::Boolean m_completed; // 0x10
		::System::Byte _padding0[0x7];
		::System::Nullable_1<::System::Int64> m_lowestBreakIteration; // 0x18
	};
}
