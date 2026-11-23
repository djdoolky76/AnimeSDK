#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/FBADA98F49F82B7B.h"
#include "unitysdk/System/ValueType.h"

class B301614EC947BB09;

#define BDDB88BF8C11BBB3_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3D5DD60)
#define BDDB88BF8C11BBB3__CTOR_OFFSET UNITYSDK_OFFSET(0x3D5DDE0)

inline static constexpr unsigned int BDDB88BF8C11BBB3_TypeDefinitionIndex = 11013;

struct alignas(8) BDDB88BF8C11BBB3
{
	::PVOID B22121657CCB401E; // 0x10
	::System::Runtime::InteropServices::FBADA98F49F82B7B B4F86EDF027433DA; // 0x18
	::B301614EC947BB09* A5F366B9D1BFA107; // 0x20

	::System::Void _ctor(::PVOID A1A721A6CAD1353B, ::System::Runtime::InteropServices::FBADA98F49F82B7B E38FD399E4DFEF27, ::B301614EC947BB09* F7A2CF3AB5DEC161)
	{
		return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Runtime::InteropServices::FBADA98F49F82B7B, ::B301614EC947BB09*))((::PBYTE)hIl2Cpp + BDDB88BF8C11BBB3__CTOR_OFFSET))(this, A1A721A6CAD1353B, E38FD399E4DFEF27, F7A2CF3AB5DEC161);
	}

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDB88BF8C11BBB3_E8AF1E0387A100FA_OFFSET))(this);
	}
};
