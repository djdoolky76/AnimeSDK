#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T> class Pinnable_1_55736D7E8D1790E8; }

namespace System
{
	template <typename T>
	struct alignas(8) Span_1_0C0D59FF8BC7380B
	{
		::System::Pinnable_1_55736D7E8D1790E8<T>* _pinnable; // 0x0
		::System::IntPtr _byteOffset; // 0x0
		::System::Int32 _length; // 0x0
	};
}
