#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace XLua
{
	struct alignas(8) LuaMemoryLeakChecker_RefInfo
	{
		::System::String* Key; // 0x10
		::System::Boolean HasNext; // 0x18
		::System::Byte _padding0[0x7];
		::System::IntPtr Parent; // 0x20
		::System::Boolean IsNumberKey; // 0x28
	};
}
