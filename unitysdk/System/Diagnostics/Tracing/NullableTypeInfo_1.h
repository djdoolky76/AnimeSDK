#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Diagnostics::Tracing { class TraceLoggingTypeInfo; }

namespace System::Diagnostics::Tracing
{
	template <typename T>
	class NullableTypeInfo_1
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo* valueInfo; // 0x0
	};
}
