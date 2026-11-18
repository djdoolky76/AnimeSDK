#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Pinnable_1_21321BB165CABDFE; }

namespace System
{
	inline static constexpr unsigned int ReadOnlySpan_1_F48FB86071006F3E_TypeDefinitionIndex = 6565;

	template <typename T>
	struct alignas(8) ReadOnlySpan_1_F48FB86071006F3E
	{
		::System::Pinnable_1_21321BB165CABDFE<T>* _pinnable; // 0x0
		::System::IntPtr _byteOffset; // 0x0
		::System::Int32 _length; // 0x0
	};
}
