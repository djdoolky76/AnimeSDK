#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define KLAAEAIFNJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CFDC0)

inline static constexpr unsigned int KLAAEAIFNJN_TypeDefinitionIndex = 73909;

class KLAAEAIFNJN : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAAEAIFNJN__CTOR_OFFSET))(this);
	}
};
