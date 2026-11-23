#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E820C206C2A91678/FA9BAE6EB6CD9DE5.h"
#include "unitysdk/System/ValueType.h"

#define E820C206C2A91678_F7EE81005DBCE06F__CTOR_OFFSET UNITYSDK_OFFSET(0x40FE310)

namespace E820C206C2A91678
{
	inline static constexpr unsigned int F7EE81005DBCE06F_TypeDefinitionIndex = 21235;

	struct alignas(4) F7EE81005DBCE06F
	{
		::System::Single B1306EBF4CF181AF; // 0x10
		::System::Boolean EE31DE1FE2D8D911; // 0x14
		::System::Boolean B11BDB62848B234E; // 0x15
		::System::Boolean AAC2AAC4EFC8AE80; // 0x16
		::System::Byte _padding0[0x1];
		::System::Single A71161AE4450A2FC; // 0x18
		::E820C206C2A91678::FA9BAE6EB6CD9DE5 B59AF84103C1F1FF; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E820C206C2A91678_F7EE81005DBCE06F__CTOR_OFFSET))(this);
		}
	};
}
