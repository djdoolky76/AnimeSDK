#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Diagnostics::Tracing { class TraceLoggingTypeInfo; }
namespace System::Reflection { class MethodInfo; }

namespace System::Diagnostics::Tracing
{
	template <typename T>
	class NonGenericProperytWriter_1
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo* typeInfo; // 0x0
		::System::Reflection::MethodInfo* getterInfo; // 0x0
	};
}
