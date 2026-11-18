#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKADONKJALP.h"
#include "unitysdk/HFHIMPFIHMA.h"

#define NCBBOAIGMFF__CTOR_OFFSET UNITYSDK_OFFSET(0x18FAE2F0)

inline static constexpr unsigned int NCBBOAIGMFF_TypeDefinitionIndex = 55055;

class NCBBOAIGMFF : public ::HFHIMPFIHMA
{
public:
	::AKADONKJALP OBNIAHNMHPF; // 0x10

	::System::Void _ctor(::AKADONKJALP OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::AKADONKJALP))((::PBYTE)hIl2Cpp + NCBBOAIGMFF__CTOR_OFFSET))(this, OBNIAHNMHPF);
	}
};
