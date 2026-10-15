#pragma once
#include "unitysdk/unitysdk.h"

#define CYSHARP_THREADING_TASKS_UNITASKVOID_FORGET_OFFSET UNITYSDK_OFFSET(0x10B0)

namespace Cysharp::Threading::Tasks
{
	struct alignas(4) UniTaskVoid
	{
		::System::Void Forget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKVOID_FORGET_OFFSET))(this);
		}

	};
}
