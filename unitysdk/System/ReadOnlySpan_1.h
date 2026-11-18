#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Pinnable_1_21321BB165CABDFE; }

namespace System
{
	inline static constexpr unsigned int ReadOnlySpan_1_TypeDefinitionIndex = 110;

	template <typename T>
	struct alignas(8) ReadOnlySpan_1
	{
		::System::Pinnable_1_21321BB165CABDFE<T>* _pinnable; // 0x0
		::System::IntPtr _byteOffset; // 0x0
		::System::Int32 _length; // 0x0
	};
}
