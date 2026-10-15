#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

namespace System
{
	template <typename T>
	class Lazy_1_LazyInternalExceptionHolder : public ::System::Object
	{
	public:
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* m_edi; // 0x0
	};
}
