#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEKNEEMAHBC.h"
#include "unitysdk/GEKNEEMAHBC_JENDGGPPBIA.h"

#define JHJECEKKOMG_BPFPAIMCKBE_OFFSET UNITYSDK_OFFSET(0x198C9340)
#define JHJECEKKOMG__CTOR_OFFSET UNITYSDK_OFFSET(0x198C9350)

inline static constexpr unsigned int JHJECEKKOMG_TypeDefinitionIndex = 82116;

class JHJECEKKOMG : public ::GEKNEEMAHBC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJECEKKOMG__CTOR_OFFSET))(this);
	}

	::GEKNEEMAHBC_JENDGGPPBIA BPFPAIMCKBE()
	{
		return ((::GEKNEEMAHBC_JENDGGPPBIA(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJECEKKOMG_BPFPAIMCKBE_OFFSET))(this);
	}
};
