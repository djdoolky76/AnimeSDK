#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

class MDDNDJCOGEE;

#define LOKNDBNFMMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E11F2B0)

inline static constexpr unsigned int LOKNDBNFMMN_TypeDefinitionIndex = 94822;

class LOKNDBNFMMN : public ::BIHPBFHEOOA
{
public:
	::MDDNDJCOGEE* OHOGDOMNHNK; // 0x10
	::System::UInt32 BKLGNCBNEGM; // 0x18
	::System::UInt32 MDPPNMIPDMP; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKNDBNFMMN__CTOR_OFFSET))(this);
	}
};
