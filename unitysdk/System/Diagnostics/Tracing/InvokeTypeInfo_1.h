#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Diagnostics::Tracing { class PropertyAnalysis; }
namespace System::Diagnostics::Tracing { template <typename T> class PropertyAccessor_1; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int InvokeTypeInfo_1_TypeDefinitionIndex = 1606;

	template <typename T>
	class InvokeTypeInfo_1
	{
	public:
		::Il2CppArray<::System::Diagnostics::Tracing::PropertyAnalysis*>* properties; // 0x0
		::Il2CppArray<::System::Diagnostics::Tracing::PropertyAccessor_1<::System::Object*>*>* accessors; // 0x0
	};
}
