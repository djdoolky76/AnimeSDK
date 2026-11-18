#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEKNEEMAHBC.h"
#include "unitysdk/GEKNEEMAHBC_JENDGGPPBIA.h"

#define ENPPAOHBNCA_BPFPAIMCKBE_OFFSET UNITYSDK_OFFSET(0xF9E5140)
#define ENPPAOHBNCA__CTOR_OFFSET UNITYSDK_OFFSET(0xF9E5150)

inline static constexpr unsigned int ENPPAOHBNCA_TypeDefinitionIndex = 52737;

class ENPPAOHBNCA : public ::GEKNEEMAHBC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPPAOHBNCA__CTOR_OFFSET))(this);
	}

	::GEKNEEMAHBC_JENDGGPPBIA BPFPAIMCKBE()
	{
		return ((::GEKNEEMAHBC_JENDGGPPBIA(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPPAOHBNCA_BPFPAIMCKBE_OFFSET))(this);
	}
};
