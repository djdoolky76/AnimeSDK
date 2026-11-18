#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define GJADEDFNBMB__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF7A00)

inline static constexpr unsigned int GJADEDFNBMB_TypeDefinitionIndex = 49046;

class GJADEDFNBMB : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJADEDFNBMB__CTOR_OFFSET))(this);
	}
};
