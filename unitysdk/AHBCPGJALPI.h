#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/System/ValueType.h"

#define AHBCPGJALPI_CKEGGKACPEC_OFFSET UNITYSDK_OFFSET(0x143A0790)
#define AHBCPGJALPI_IDHOMHHFPOH_OFFSET UNITYSDK_OFFSET(0x727D40)
#define AHBCPGJALPI__CTOR_OFFSET UNITYSDK_OFFSET(0x727D20)

inline static constexpr unsigned int AHBCPGJALPI_TypeDefinitionIndex = 76556;

struct alignas(4) AHBCPGJALPI
{
	::MGHNAPKHBOG MONJKKNAIMP; // 0x10
	::System::Boolean FHNNNJLMDKF; // 0x28

	::System::Void _ctor(::MGHNAPKHBOG EOONAEHNGLF)
	{
		return ((::System::Void(*)(::PVOID, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + AHBCPGJALPI__CTOR_OFFSET))(this, EOONAEHNGLF);
	}

	/*
	static ::AHBCPGJALPI CKEGGKACPEC()
	{
		return ((::AHBCPGJALPI(*)())((::PBYTE)hIl2Cpp + AHBCPGJALPI_CKEGGKACPEC_OFFSET))();
	}
	*/

	::System::Boolean IDHOMHHFPOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBCPGJALPI_IDHOMHHFPOH_OFFSET))(this);
	}
};
