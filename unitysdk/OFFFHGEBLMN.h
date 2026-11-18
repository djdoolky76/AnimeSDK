#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEKNEEMAHBC.h"
#include "unitysdk/GEKNEEMAHBC_JENDGGPPBIA.h"

#define OFFFHGEBLMN_BPFPAIMCKBE_OFFSET UNITYSDK_OFFSET(0x15F68E80)
#define OFFFHGEBLMN__CTOR_OFFSET UNITYSDK_OFFSET(0x15F68E90)

inline static constexpr unsigned int OFFFHGEBLMN_TypeDefinitionIndex = 70529;

class OFFFHGEBLMN : public ::GEKNEEMAHBC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFFHGEBLMN__CTOR_OFFSET))(this);
	}

	::GEKNEEMAHBC_JENDGGPPBIA BPFPAIMCKBE()
	{
		return ((::GEKNEEMAHBC_JENDGGPPBIA(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFFHGEBLMN_BPFPAIMCKBE_OFFSET))(this);
	}
};
