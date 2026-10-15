#pragma once
#include "unitysdk/unitysdk.h"

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	struct alignas(8) TaskPool_1
	{
		::System::Int32 gate; // 0x0
		::System::Int32 size; // 0x0
		T root; // 0x0
	};
}
