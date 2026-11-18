#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define CDKNHLPNNDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1478B2B0)

inline static constexpr unsigned int CDKNHLPNNDG_TypeDefinitionIndex = 80648;

class CDKNHLPNNDG : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKNHLPNNDG__CTOR_OFFSET))(this);
	}
};
