#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define OBGEKCBIBLB__CTOR_OFFSET UNITYSDK_OFFSET(0x14F5EED0)

inline static constexpr unsigned int OBGEKCBIBLB_TypeDefinitionIndex = 60343;

class OBGEKCBIBLB : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGEKCBIBLB__CTOR_OFFSET))(this);
	}
};
