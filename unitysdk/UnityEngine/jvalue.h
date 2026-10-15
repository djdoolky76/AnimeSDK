#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	struct alignas(4) jvalue
	{
		::System::Boolean z; // 0x10
		::System::SByte b; // 0x10
		::System::Char c; // 0x10
		::System::Int16 s; // 0x10
		::System::Int32 i; // 0x10
		::System::Int64 j; // 0x10
		::System::Single f; // 0x10
		::System::Double d; // 0x10
		::System::IntPtr l; // 0x10
	};
}
