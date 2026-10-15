#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	struct alignas(4) CullingGroupEvent
	{
		::System::Int32 m_Index; // 0x10
		::System::Byte m_PrevState; // 0x14
		::System::Byte m_ThisState; // 0x15
	};
}
