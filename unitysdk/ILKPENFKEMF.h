#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEKNEEMAHBC.h"
#include "unitysdk/GEKNEEMAHBC_JENDGGPPBIA.h"

#define ILKPENFKEMF_BPFPAIMCKBE_OFFSET UNITYSDK_OFFSET(0x1381BF40)
#define ILKPENFKEMF_KDHEBLAPDCD_OFFSET UNITYSDK_OFFSET(0x1381BF70)
#define ILKPENFKEMF_PFOBLILDDGB_OFFSET UNITYSDK_OFFSET(0x1381BFD0)
#define ILKPENFKEMF__CTOR_OFFSET UNITYSDK_OFFSET(0x1381BF50)

inline static constexpr unsigned int ILKPENFKEMF_TypeDefinitionIndex = 61674;

class ILKPENFKEMF : public ::GEKNEEMAHBC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKPENFKEMF__CTOR_OFFSET))(this);
	}

	::GEKNEEMAHBC_JENDGGPPBIA BPFPAIMCKBE()
	{
		return ((::GEKNEEMAHBC_JENDGGPPBIA(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKPENFKEMF_BPFPAIMCKBE_OFFSET))(this);
	}

	::System::Void KDHEBLAPDCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKPENFKEMF_KDHEBLAPDCD_OFFSET))(this);
	}

	::System::Void PFOBLILDDGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKPENFKEMF_PFOBLILDDGB_OFFSET))(this);
	}
};
