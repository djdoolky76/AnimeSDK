#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEKNEEMAHBC.h"
#include "unitysdk/GEKNEEMAHBC_JENDGGPPBIA.h"

#define OHAJACCAECC_BPFPAIMCKBE_OFFSET UNITYSDK_OFFSET(0x15F70CB0)
#define OHAJACCAECC__CTOR_OFFSET UNITYSDK_OFFSET(0x15F70CC0)

inline static constexpr unsigned int OHAJACCAECC_TypeDefinitionIndex = 47271;

class OHAJACCAECC : public ::GEKNEEMAHBC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHAJACCAECC__CTOR_OFFSET))(this);
	}

	::GEKNEEMAHBC_JENDGGPPBIA BPFPAIMCKBE()
	{
		return ((::GEKNEEMAHBC_JENDGGPPBIA(*)(::PVOID))((::PBYTE)hIl2Cpp + OHAJACCAECC_BPFPAIMCKBE_OFFSET))(this);
	}
};
