#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Diagnostics::Tracing { template <typename T> class TraceLoggingTypeInfo_1; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int KeyValuePairTypeInfo_2_TypeDefinitionIndex = 1657;

	template <typename T1, typename T2>
	class KeyValuePairTypeInfo_2
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::Object*>* keyInfo; // 0x0
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::Object*>* valueInfo; // 0x0
	};
}
