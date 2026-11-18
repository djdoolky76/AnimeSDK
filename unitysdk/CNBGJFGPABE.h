#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPKPLHLBPPO.h"
#include "unitysdk/System/ValueType.h"

#define CNBGJFGPABE__CTOR_OFFSET UNITYSDK_OFFSET(0x731360)

inline static constexpr unsigned int CNBGJFGPABE_TypeDefinitionIndex = 92546;

struct alignas(4) CNBGJFGPABE
{
	::System::Int32 DKOFFFNEFJC; // 0x10
	::GPKPLHLBPPO IMJOMMKMONJ; // 0x14
	::System::Single BEKLCLFIDKF; // 0x18

	::System::Void _ctor(::System::Int32 DKOFFFNEFJC, ::GPKPLHLBPPO IMJOMMKMONJ, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::GPKPLHLBPPO, ::System::Single))((::PBYTE)hIl2Cpp + CNBGJFGPABE__CTOR_OFFSET))(this, DKOFFFNEFJC, IMJOMMKMONJ, BEKLCLFIDKF);
	}
};
