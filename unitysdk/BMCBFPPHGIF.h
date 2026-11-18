#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class IMKLCBAMEOK;

#define BMCBFPPHGIF_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x5FA570)
#define BMCBFPPHGIF_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x606970)

inline static constexpr unsigned int BMCBFPPHGIF_TypeDefinitionIndex = 62168;

struct alignas(4) BMCBFPPHGIF
{
	::System::UInt32 ECPBEJKFMOJ; // 0x10

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCBFPPHGIF_JDAPDDEOCEA_OFFSET))(this);
	}

	::IMKLCBAMEOK* OMPFLKCBFHF()
	{
		return ((::IMKLCBAMEOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCBFPPHGIF_OMPFLKCBFHF_OFFSET))(this);
	}
};
