#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Diagnostics::Tracing { template <typename T> class TraceLoggingTypeInfo_1; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EnumerableTypeInfo_2_TypeDefinitionIndex = 1596;

	template <typename T1, typename T2>
	class EnumerableTypeInfo_2
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::Object*>* elementInfo; // 0x0
	};
}
