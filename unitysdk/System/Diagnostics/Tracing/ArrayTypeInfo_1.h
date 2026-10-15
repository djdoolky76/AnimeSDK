#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Diagnostics::Tracing { class TraceLoggingTypeInfo; }

namespace System::Diagnostics::Tracing
{
	template <typename T>
	class ArrayTypeInfo_1
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo* elementInfo; // 0x0
	};
}
