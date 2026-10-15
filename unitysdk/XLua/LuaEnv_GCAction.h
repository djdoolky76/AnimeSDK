#pragma once
#include "unitysdk/unitysdk.h"

namespace XLua
{
	struct alignas(4) LuaEnv_GCAction
	{
		::System::Int32 Reference; // 0x10
		::System::Boolean IsDelegate; // 0x14
	};
}
