#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define HPMCGPFHBKO__CTOR_OFFSET UNITYSDK_OFFSET(0x1655A230)

inline static constexpr unsigned int HPMCGPFHBKO_TypeDefinitionIndex = 54675;

class HPMCGPFHBKO : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMCGPFHBKO__CTOR_OFFSET))(this);
	}
};
