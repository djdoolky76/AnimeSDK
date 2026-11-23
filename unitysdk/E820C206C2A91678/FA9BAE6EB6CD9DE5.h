#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define E820C206C2A91678_FA9BAE6EB6CD9DE5__CTOR_OFFSET UNITYSDK_OFFSET(0x40FE300)

namespace E820C206C2A91678
{
	inline static constexpr unsigned int FA9BAE6EB6CD9DE5_TypeDefinitionIndex = 21230;

	struct alignas(4) FA9BAE6EB6CD9DE5
	{
		::System::Byte F52F4BE508EA775E; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single B20A44FB1471A894; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E820C206C2A91678_FA9BAE6EB6CD9DE5__CTOR_OFFSET))(this);
		}
	};
}
