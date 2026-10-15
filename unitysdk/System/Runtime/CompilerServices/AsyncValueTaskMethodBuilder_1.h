#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncValueTaskMethodBuilder_1_TypeDefinitionIndex = 6681;

	template <typename T>
	struct alignas(8) AsyncValueTaskMethodBuilder_1
	{
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> _methodBuilder; // 0x0
		T _result; // 0x0
		::System::Boolean _haveResult; // 0x0
		::System::Boolean _useBuilder; // 0x0
	};
}
