#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace XLua
{
	struct alignas(8) Utils_MethodKey
	{
		::System::String* Name; // 0x10
		::System::Boolean IsStatic; // 0x18
	};
}
