#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

namespace System
{
	inline static constexpr unsigned int Lazy_1_LazyInternalExceptionHolder_TypeDefinitionIndex = 148;

	template <typename T>
	class Lazy_1_LazyInternalExceptionHolder : public ::System::Object
	{
	public:
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* m_edi; // 0x0
	};
}
