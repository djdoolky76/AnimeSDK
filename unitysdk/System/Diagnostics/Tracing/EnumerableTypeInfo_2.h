#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Diagnostics::Tracing { class TraceLoggingTypeInfo; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EnumerableTypeInfo_2_TypeDefinitionIndex = 1596;

	template <typename T1, typename T2>
	class EnumerableTypeInfo_2
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo* elementInfo; // 0x0
	};
}
