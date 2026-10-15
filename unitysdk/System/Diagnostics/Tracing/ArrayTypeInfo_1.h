#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Diagnostics::Tracing { template <typename T> class TraceLoggingTypeInfo_1; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ArrayTypeInfo_1_TypeDefinitionIndex = 1588;

	template <typename T>
	class ArrayTypeInfo_1
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::Object*>* elementInfo; // 0x0
	};
}
