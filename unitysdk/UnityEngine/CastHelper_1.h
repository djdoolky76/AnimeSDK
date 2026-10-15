#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	template <typename T>
	struct alignas(8) CastHelper_1
	{
		T t; // 0x0
		::System::IntPtr onePointerFurtherThanT; // 0x0
	};
}
