#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define IHMMLNOFBEM_DKFHCIMLHLG_OFFSET UNITYSDK_OFFSET(0x790810)
#define IHMMLNOFBEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3CEE90)
#define IHMMLNOFBEM__CTOR_OFFSET UNITYSDK_OFFSET(0x790800)

inline static constexpr unsigned int IHMMLNOFBEM_TypeDefinitionIndex = 55266;

struct alignas(4) IHMMLNOFBEM
{
	::System::UInt16 DJJGLILJKEA; // 0x10
	::System::UInt16 PCBABKBCMMN; // 0x12

	::System::Void _ctor(::System::UInt16 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + IHMMLNOFBEM__CTOR_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void _ctor_1(::System::UInt16 MGMDLMBEDJF, ::System::UInt16 EDPNEKNKHKN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + IHMMLNOFBEM__CTOR_1_OFFSET))(this, MGMDLMBEDJF, EDPNEKNKHKN);
	}

	::System::Boolean DKFHCIMLHLG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMMLNOFBEM_DKFHCIMLHLG_OFFSET))(this);
	}
};
