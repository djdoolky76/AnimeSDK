#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define FLMACNBMBJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1410C150)

inline static constexpr unsigned int FLMACNBMBJB_TypeDefinitionIndex = 70670;

class FLMACNBMBJB : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMACNBMBJB__CTOR_OFFSET))(this);
	}
};
