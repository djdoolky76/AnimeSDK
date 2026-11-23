#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define E820C206C2A91678_E24152B7FCB05215_E6E9F7FEF35DC687_OFFSET UNITYSDK_OFFSET(0x40FE340)

namespace E820C206C2A91678
{
	inline static constexpr unsigned int E24152B7FCB05215_TypeDefinitionIndex = 21221;

	struct alignas(4) E24152B7FCB05215
	{
		::System::UInt32 AD708608EAFFA323; // 0x10
		::System::Single A91D23FB43225292; // 0x14
		::System::UInt32 B14BD569791E8167; // 0x18
		::System::Byte EF4351F8EA0666B6; // 0x1C
		::System::Byte FA9205ADB10C03EF; // 0x1D

		::System::Int32 E6E9F7FEF35DC687()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E820C206C2A91678_E24152B7FCB05215_E6E9F7FEF35DC687_OFFSET))(this);
		}
	};
}
