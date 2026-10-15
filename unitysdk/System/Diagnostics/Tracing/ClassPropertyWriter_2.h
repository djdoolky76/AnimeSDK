#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Diagnostics::Tracing { class TraceLoggingTypeInfo; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ClassPropertyWriter_2_TypeDefinitionIndex = 1610;

	template <typename T1, typename T2>
	class ClassPropertyWriter_2
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo* valueTypeInfo; // 0x0
		::System::Object* getter; // 0x0
	};
}
