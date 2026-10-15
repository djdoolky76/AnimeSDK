#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

namespace RPG
{
	template <typename T>
	class GCFreeLazy_1_LazyInternalExceptionHolder : public ::System::Object
	{
	public:
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* m_edi; // 0x0
	};
}
