#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_GLOBALIZATION_A242849D56666D4F_A923D62BE43DBE28__CTOR_OFFSET UNITYSDK_OFFSET(0x3BC0260)

namespace System::Globalization
{
	inline static constexpr unsigned int A242849D56666D4F_A923D62BE43DBE28_TypeDefinitionIndex = 11210;

	struct alignas(4) A242849D56666D4F_A923D62BE43DBE28
	{
		::System::Int32 FA19E0CEE370235B; // 0x10
		::System::Byte _padding0[0x4];
		::System::DateTime F482F7F7E151FEAC; // 0x18

		::System::Void _ctor(::System::Int32 B3EB538656FBAF04, ::System::Int32 A12C7376593A74EB, ::System::Int32 F70BD613C796A1D6, ::System::Int32 EB7347EE6AD3EC1D)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_A242849D56666D4F_A923D62BE43DBE28__CTOR_OFFSET))(this, B3EB538656FBAF04, A12C7376593A74EB, F70BD613C796A1D6, EB7347EE6AD3EC1D);
		}
	};
}
