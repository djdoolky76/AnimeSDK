#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Diagnostics::Tracing { template <typename T> class TraceLoggingTypeInfo_1; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int NullableTypeInfo_1_TypeDefinitionIndex = 1658;

	template <typename T>
	class NullableTypeInfo_1
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<T>* valueInfo; // 0x0
	};
}
