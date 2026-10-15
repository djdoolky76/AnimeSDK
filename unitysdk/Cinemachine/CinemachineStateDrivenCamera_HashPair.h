#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	struct alignas(4) CinemachineStateDrivenCamera_HashPair
	{
		::System::Int32 parentHash; // 0x10
		::System::Int32 hash; // 0x14
	};
}
