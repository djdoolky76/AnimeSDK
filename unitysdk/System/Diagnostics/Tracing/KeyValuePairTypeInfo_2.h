#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Diagnostics::Tracing { class TraceLoggingTypeInfo; }

namespace System::Diagnostics::Tracing
{
	template <typename T1, typename T2>
	class KeyValuePairTypeInfo_2
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo* keyInfo; // 0x0
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo* valueInfo; // 0x0
	};
}
